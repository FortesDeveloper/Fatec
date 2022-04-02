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
    <title>Salvando Professor</title>
</head>
<body>
<?php
    //VARIAVEIS
    $arq    = "Professores.txt";
    $nome   = '';
    $cpf    = '';
    $fone   = '';
    $cidade = '';

    echo '===============================<br>';
    echo '        Listagem<br>';
    echo '===============================<br>';
    echo 'NOME | CPF | FONE | CIDADE<br>';
    echo '===============================<br>';
    //LEITURA
    if(!file_exists($arq))
        $file = fopen($arq, "w");
    else 
        $file = fopen($arq, "r");

    while(!feof($file)) 
    {
        $line = fgets($file);
        //echo $line;

        if (stristr($line, 'NOME:'))
            $nome = substr($line, 5, strlen($line)-6);
        if (stristr($line, 'CPF:'))
            $cpf = substr($line, 4, strlen($line)-5);
        if (stristr($line, 'FONE:'))
            $fone = substr($line, 5, strlen($line)-6);
        if (stristr($line, 'CIDADE:'))
        {
            $cidade = substr($line, 7, strlen($line)-8);
            
            //listando
            echo $nome.' | '.$cpf.' | '.$fone.' | '.$cidade.'<br>';
            //reset variaveis
            $nome   = '';
            $cpf    = '';
            $fone   = '';
            $cidade = '';
        }
    }
    fclose($file);
?>
    <p>
        <a href="welcome.php" class="btn btn-danger">Voltar</a>
    </p>

</body>
</html>