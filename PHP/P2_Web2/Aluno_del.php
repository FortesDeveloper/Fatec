<?php
    if (!empty($_GET['id']))
    {
        include_once 'classes\aluno.php';

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
            if ($P->AlunoDEL($id, $erro) > 0)
            {
                echo 'Excluído com sucesso !';
                header("location: index.php");
            }
            else
            {
                if ($erro != "")
                    echo 'Erro ao excluiru ! <br/> Motivo:<br/>'.$erro;
                else
                    echo 'Erro ao excluir.<br/>';
            }
        }

        echo "<p>
                <a href='index.php' class='btn btn-danger'>Voltar</a>
             </p>";
    }
?>