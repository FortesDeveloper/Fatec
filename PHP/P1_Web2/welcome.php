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
    <title>Benvindo</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; text-align: center; }
    </style>
</head>
<body>
    <div class="page-header">
        <h1>Benvindo, <b><?php echo htmlspecialchars($_SESSION["user"]); ?>
    </div>
    <p>
        <a href="cadprof.php" class="btn btn-primary">Cadastro de professores</a>
        <br><br>
        <a href="listaprof.php" class="btn btn-primary">Listagem de professores</a>
        <br><br>
        <a href="logout.php" class="btn btn-danger">Sair</a>
    </p>
</body>
</html>