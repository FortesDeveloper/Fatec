<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Cadastro de alunos</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; text-align: center; }
    </style>
</head>
<body>
    <div class="wrapper">
        <h2>Cadastro de alunos - Localizar...</h2>
        <p>Localize o aluno para realizar a operação, informando 1 ou mais campos abaixo</p>
        <form action="validaaluno.php" method="post">
            <div class="form-group">
                <label>chave</label>
                <input type="text" name="chave" value="">
                <span class="help-block"></span>
            </div>  
            <div class="form-group">
                <label>nome</label>
                <input type="text" name="nome" value="">
                <span class="help-block"></span>
            </div>    
            <div class="form-group">
                <label>CPF</label>
                <input type="text" name="cpf" value="">
                <span class="help-block"></span>
            </div>
            <div class="form-group">
                <input type="submit" class="btn btn-primary" value="Localizar">
                <a href="index.php" class="btn btn-danger">Voltar</a>
            </div>
        </form>
    </div>
</body>
</html>