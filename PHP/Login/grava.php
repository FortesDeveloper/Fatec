<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Adivinhando a senha</title>
</head>
<body>
<?php
    $ok = 1;

    if ( (isset($_POST['nome'])) and (isset($_POST['cpf']))  )
    {
      $nome = $_POST['nome'];
      $cpf  = $_POST['cpf'];
    }
    else
      $ok = 0;

    if ($ok == 1)
    {
        echo '<br><br>Gravado com sucesso.'.'<br>';

        $arq = "gravado.txt";

        if(!file_exists($arq))
            $handle = fopen($arq, "w");
        else 
            $handle = fopen($arq, "a");

        fwrite($handle, "Nome:".$nome."\n");
        fwrite($handle, "CPF:".$cpf."\n");
        fflush($handle);
        fclose($handle);
    }
    else
        echo '<br><br>Informe o nome e CPF.'.'<br>';

?>
    <p>
        <a href="welcome.php" class="btn btn-danger">Voltar</a>
    </p>

</body>
</html>