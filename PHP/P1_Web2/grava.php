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

    function validaCPF($pCPF) 
    {
        $arq    = "Professores.txt";
        $ret = 1;
        
        if(!file_exists($arq))
            $file = fopen($arq, "w");
        else 
            $file = fopen($arq, "r");

        while(!feof($file)) 
        {
            $line = fgets($file);
            echo $line;
            if (stristr($line, $pCPF))
                $ret = 0;
        }
        fclose($file);

        return ($ret == 1);
    }
    //DESTRINCHA ARRAY E JOGA NAS VARIÁVEIS
    //print_r ($_POST);
    if (isset($_POST['nome']))
        $nome = $_POST['nome'];
    if (isset($_POST['cpf']))
        $cpf = $_POST['cpf'];
    if (isset($_POST['fone']))
        $fone = $_POST['fone'];
    if (isset($_POST['cidade']))
        $cidade = $_POST['cidade'];
    
    //VALIDAÇÕES
    //CPF PREENCHIDO
    if ($cpf == '')
    {
        $_SESSION["erro"] = 'Preencha o CPF.';
        header("location: errorpage.php");
        exit;
    }
    //CPF ÚNICO
    if (validaCPF($cpf))
      echo 'validou';
    else
    {
        $_SESSION["erro"] = 'CPF já cadastrado.';
        header("location: errorpage.php");
        exit;
    }

    //GRAVAÇÃO
    if(!file_exists($arq))
        $handle = fopen($arq, "w");
    else 
        $handle = fopen($arq, "a");

    fwrite($handle, "NOME:".$nome."\n");
    fwrite($handle, "CPF:".$cpf."\n");
    fwrite($handle, "FONE:".$fone."\n");
    fwrite($handle, "CIDADE:".$cidade."\n");
    fflush($handle);
    fclose($handle);

    echo '<br><br>Gravado com sucesso.'.'<br>';
?>
    <p>
        <a href="welcome.php" class="btn btn-danger">Voltar</a>
    </p>

</body>
</html>