<?php
    include_once 'classes\aluno.php';

    if (isset($_POST['gravar']))
    {
        $nome  = $_POST['nome'];
        $cpf   = $_POST['cpf'];
        $fone  = $_POST['fone'];
        $email = $_POST['email'];

        $A = new Aluno;
        if ($A->AlunoADD($cpf, $nome, $fone, $email, $erro) > 0)
        {
            //echo 'Inserido com sucesso !';
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
    <title>Cadastro de Aluno</title>
    <link rel="stylesheet" href="css/cad.css">
</head>
<body>
    <div class="box">
        <form action="Aluno_add.php" method="POST">
            <fieldset>
                <legend><b>Cadastro de Aluno - Inclusão</b></legend>
                <br>
                <div class="inputBox">
                    <input type="text" name="nome" id="nome" class="inputUser" required>
                    <label for="nome" class="labelInput">Nome</label>
                </div>
                <br><br>
                <div class="inputBox">
                    <input type="text" name="cpf" id="cpf" class="inputUser" required>
                    <label for="cpf" class="labelInput">CPF</label>
                </div>
                <br><br>
                <div class="inputBox">
                    <input type="tel" name="fone" id="fone" class="inputUser" required>
                    <label for="fone" class="labelInput">Telefone</label>
                </div>
                <br><br>
                <div class="inputBox">
                    <input type="email" name="email" id="email" class="inputUser" required>
                    <label for="email" class="labelInput">Email</label>
                </div>
                <br><br>
                    <input type="submit" name="gravar" id="gravar" class="btn btnok" value="Gravar">
                    <input type="button" name="cancel" id="cancel" class="btn btnvoltar" value="Voltar" onclick="history.go(-1);">
            </fieldset>
        </form>
    </div>  
</body>
</html>