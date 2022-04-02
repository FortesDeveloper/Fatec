<?php
    session_start();

    if(!isset($_SESSION["loggedin"]) || $_SESSION["loggedin"] !== true)
    {
        header("location: index.php");
        exit;
    }
?>

<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Erro...</title>
</head>
<body>
<?php
    echo 'Corrija os erros antes de continuar....<br>.<br>';
    echo $_SESSION["erro"]
?>
    <p>
        <a href="cadprof.php" class="btn btn-danger">Voltar</a>
    </p>

</body>
</html>