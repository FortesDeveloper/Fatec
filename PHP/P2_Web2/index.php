<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>P2 - WEB2</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <link rel="stylesheet" href="css/estilo.css">
    <style type="text/css">
        body{ font: 14px sans-serif; }
        .wrapper{ width: 90%; padding: 20px; }
    </style>
</head>
<body>
    <header>
        <h1 class="header-title">Cadastro de Alunos</h1>
        <br>
    </header>

    <div class="wrapper">
        <table class="registros">
            <thead>
                <tr>
                    <th class="Titcol">Código</th>
                    <th class="Titcol">Nome</th>
                    <th class="Titcol">CPF</th>
                    <th class="Titcol">Fone</th>
                    <th class="Titcol">Email</th>
                    <th class="Titcol">Ação</th>
                </tr>
            </thead>
            <tbody>
                <?php
                    include_once 'classes\aluno.php';

                     $P = new Aluno;
                     $linhas = $P->AlunoListar($erro);
                     if ($erro != '')
                     {
                       if ($erro != "")
                           echo 'Falhou ! <br/> Motivo:<br/>'.$erro;
                       else
                           echo 'Registro não encontrado.<br/>';
                     }
                     else
                     {
                       while ($lin = $linhas->fetch(PDO::FETCH_ASSOC)) 
                       {    
                           echo "<tr>";
                           echo "<td>".$lin['ID_ALUNO']."</td>";
                           echo "<td>".$lin['NOME']."</td>";
                           echo "<td>".$lin['CPF']."</td>";
                           echo "<td>".$lin['FONE']."</td>";
                           echo "<td>".$lin['EMAIL']."</td>";
                           echo "<td>
                            <a class='btn btn-sm btn-primary' href='Aluno_upd.php?id=$lin[ID_ALUNO]'>
                                <svg xmlns='http://www.w3.org/2000/svg' width='16' height='16' fill='currentColor' class='bi bi-pencil' viewBox='0 0 16 16'>
                                    <path d='M12.146.146a.5.5 0 0 1 .708 0l3 3a.5.5 0 0 1 0 .708l-10 10a.5.5 0 0 1-.168.11l-5 2a.5.5 0 0 1-.65-.65l2-5a.5.5 0 0 1 .11-.168l10-10zM11.207 2.5 13.5 4.793 14.793 3.5 12.5 1.207 11.207 2.5zm1.586 3L10.5 3.207 4 9.707V10h.5a.5.5 0 0 1 .5.5v.5h.5a.5.5 0 0 1 .5.5v.5h.293l6.5-6.5zm-9.761 5.175-.106.106-1.528 3.821 3.821-1.528.106-.106A.5.5 0 0 1 5 12.5V12h-.5a.5.5 0 0 1-.5-.5V11h-.5a.5.5 0 0 1-.468-.325z'/>
                                </svg>
                            </a>

                            <a class='btn btn-sm btn-danger' href='Aluno_del.php?id=$lin[ID_ALUNO]'>
                                <svg xmlns='http://www.w3.org/2000/svg' width='16' height='16' fill='currentColor' class='bi bi-trash' viewBox='0 0 16 16'>
                                    <path d='M5.5 5.5A.5.5 0 0 1 6 6v6a.5.5 0 0 1-1 0V6a.5.5 0 0 1 .5-.5zm2.5 0a.5.5 0 0 1 .5.5v6a.5.5 0 0 1-1 0V6a.5.5 0 0 1 .5-.5zm3 .5a.5.5 0 0 0-1 0v6a.5.5 0 0 0 1 0V6z'/>
                                    <path fill-rule='evenodd' d='M14.5 3a1 1 0 0 1-1 1H13v9a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2V4h-.5a1 1 0 0 1-1-1V2a1 1 0 0 1 1-1H6a1 1 0 0 1 1-1h2a1 1 0 0 1 1 1h3.5a1 1 0 0 1 1 1v1zM4.118 4 4 4.059V13a1 1 0 0 0 1 1h6a1 1 0 0 0 1-1V4.059L11.882 4H4.118zM2.5 3V2h11v1h-11z'/>
                                </svg>
                            </a>
                           </td>";
                           echo "</tr>";
                       }
                     }
                   
                     unset($P);  
                ?>
            </tbody>
        </table>        
        
        <div class="modal" id="modal">
            <div class="modal-content">
                <header class="modal-header">
                    <h2>Novo Cliente</h2>
                    <span class="modal-close" id="modalClose">&#10006;</span>
                </header>
                <form class="modal-form">
                    <input type="text" class="modal-field" placeholder="Nome do Cliente">
                    <input type="email" class="modal-field" placeholder="e-mail do Cliente">
                    <input type="text" class="modal-field" placeholder="Celular do Cliente">
                    <input type="text" class="modal-field" placeholder="Cidade do Cliente">
                </form>
                <footer class="modal-footer">
                    <button class="button green">Salvar</button>
                    <button class="button blue">Cancelar</button>
                </footer>
            </div>
        </div>
        <br/>
        <a href="Aluno_add.php" class="btn btn-primary">Cadastrar</a>
    </div>    
    <footer>
       P2-Web2 -> William Fortes
    </footer>   
</body>
</html>