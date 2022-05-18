<?php
    include_once 'classes\aluno.php';
    
    if (!empty($_GET['id']))
    {
        $id = $_GET['id'];

        $P = new Aluno;
        $linhas = $P->AlunoExiste($id, $erro);
        if ($erro != '')
        {
            if ($erro != "")
                echo 'Falhou ! <br/> Motivo:<br/>'.$erro;
            else
                echo 'Registro não encontrado.<br/>';
        }
        else
        {
            $linhas = $P->AlunoGet($id, $erro);
            foreach ($linhas as $lin)
            {
                $id    = $lin['ID_ALUNO'];
                $nome  = $lin['NOME'];
                $cpf   = $lin['CPF'];
                $fone  = $lin['FONE'];
                $email = $lin['EMAIL'];
            }
        }
    }

    if (isset($_POST['gravar']))
    {
        $id    = $_POST['id'];
        $nome  = $_POST['nome'];
        $cpf   = $_POST['cpf'];
        $fone  = $_POST['fone'];
        $email = $_POST['email'];

        $A = new Aluno;
        if ($A->AlunoUPD($id, $cpf, $nome, $fone, $email, $erro) > 0)
        {
            //echo 'Alterado com sucesso !';
            header("location: index.php");
            //exit;
        }
        else
            echo 'Falhou ! <br/> Motivo:<br/>'.$erro;

        unset($A); 
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Alteração de Aluno</title>
    <link rel="stylesheet" href="css/cad.css">
</head>
<body>
    <div class="box">
        <form action="Aluno_upd.php" method="POST">
            <fieldset>
                <legend><b>Cadastro de Aluno - Alteração</b></legend>
                <br>
                <div class="inputBox">
                    <input type="text" name="nome" id="nome" class="inputUser" value="<?php echo $nome ?>" required>
                    <label for="nome" class="labelInput">Nome</label>
                </div>
                <br><br>
                <div class="inputBox">
                    <input type="text" name="cpf" id="cpf" class="inputUser" value="<?php echo $cpf ?>" required>
                    <label for="cpf" class="labelInput">CPF</label>
                </div>
                <br><br>
                <div class="inputBox">
                    <input type="tel" name="fone" id="fone" class="inputUser" value="<?php echo $fone ?>" required>
                    <label for="fone" class="labelInput">Telefone</label>
                </div>
                <br><br>
                <div class="inputBox">
                    <input type="email" name="email" id="email" class="inputUser" value="<?php echo $email ?>" required>
                    <label for="email" class="labelInput">Email</label>
                </div>
                <br><br>
                    <input type="hidden" name="id" id="id" value="<?php echo $id ?>">
                    <input type="submit" name="gravar" id="gravar" class="btn btnok" value="Gravar">
                    <input type="button" name="cancel" id="cancel" class="btn btnvoltar" value="Voltar" onclick="history.go(-1);">
            </fieldset>
        </form>
    </div>  
</body>
</html>