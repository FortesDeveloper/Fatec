<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Adivinhando a senha</title>
</head>
<body>
<?php
    print_r($_POST);

    if(isset($_POST['senha']))
    {
        $pass = $_POST['senha'];

        if ($pass == 'nopass')
            echo '<br><br>Parabéns,você sabe a senha.'.'<br>';
        else
        {
            echo '<br><br>Você errou.'.'<br>';

            $arq = "senhas_enviadas.txt";

            if(!file_exists($arq))
                $handle = fopen($arq, "w");
            else 
                $handle = fopen($arq, "a");

            fwrite($handle, $pass."\n");
            fflush($handle);
            fclose($handle);
        }
    }
    
?>
</body>
</html>