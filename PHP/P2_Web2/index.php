<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Acessar</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; }
        .wrapper{ width: 500px; padding: 20px; }
    </style>
</head>
<body>
    <div class="wrapper">
        <h2>P2-Web2 -> William Fortes</h2>
        <h3><br/>Cadastro de Alunos<br/></h3>
        
        <!-- <a href="cadaluno.php" class="btn btn-primary">Adicionar</a>
        <a href="localizar.php?opc=1" class="btn btn-primary">Alterar</a>
        <a href="localizar.php?opc=2" class="btn btn-danger">Excluir</a>
        <a href="welcome.php" class="btn btn-primary">Listar</a> -->
        <form method="POST" action="cadaluno.php">
            <!-- <input type="hidden" name="opc" value="1"> -->
            <button class="btn btn-primary">Adicionar</button>
        </form>

        <form method="POST" action="localizar.php">
            <input type="hidden" name="opc" value="1">
            <button class="btn btn-primary">Alterar</button>
        </form>

        <form method="POST" action="localizar.php">
            <input type="hidden" name="opc" value="2">
            <button class="btn btn-danger">Excluir</button>
        </form>

        <form method="POST" action="listar.php">
            <!-- <input type="hidden" name="opc" value="1"> -->
            <button class="btn btn-primary">Listar</button>
        </form>

    </div>    
</body>
</html>