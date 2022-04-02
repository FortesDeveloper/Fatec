<?php
    session_start();

    if(!isset($_SESSION["loggedin"]) || $_SESSION["loggedin"] !== true)
    {
        header("location: index.php");
        exit;
    }
?>
 
<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Cadastro de professores</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; text-align: center; }
    </style>
</head>
<body>
    <div class="wrapper">
        <h1>Cadastro de professores</h1>
        <form action="grava.php" method="post">
            <div class="form-group">
                <label>Nome</label>
                <input type="text" name="nome" value="">
                <span class="help-block"></span>
            </div>    
            <div class="form-group">
                <label>CPF</label>
                <input type="text" name="cpf" value="">
                <span class="help-block"></span>
            </div>
            <div class="form-group">
                <label>Fone</label>
                <input type="text" name="fone" value="">
                <span class="help-block"></span>
            </div>
            <div class="form-group">
                <label>Cidade</label>
                <input type="text" name="cidade" value="">
                <span class="help-block"></span>
            </div>
            <div class="form-group">
                <input type="submit" class="btn btn-primary" value="Gravar">
                <br><br>
                <a href="welcome.php" class="btn btn-danger">Cancelar</a>
            </div>
        </form>
    </div>
</body>
</html>