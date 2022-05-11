<?php

//*********************************************
//Classe 
//*********************************************
include_once '..\classes\aluno.php';

//*********************************************
//parametros passados via POST
//*********************************************
/*$nome = $_POST['nome'];
$endereco = $_POST['endereco'];
$cpf = $_POST['cpf'];
$idade = $_POST['idade'];
$sexo = $_POST['sexo'];*/


//*********************************************
//INSTANCIA Onjetos da Classe referida
//*********************************************
$A = new Aluno;

//Método que vai usar e parametros

//******************************************************* */
// T R A T A R    O S    R E T O R N O S 
//******************************************************* */
//tratar retornos sessão, volta para a tela anterior, etc...

//INSERT 
/*
if ($A->AlunoADD(11167662,
              'Rubens barichello',
              '(19)99988-5555',
              $erro
    ) > 0)
    echo 'Inserido com sucesso !';
  else
  echo 'Falhou ! <br/> Motivo:<br/>'.$erro;
*/

//UPDATE
/*if ($A->AlunoUPD(30, //chave q está alterando
              'Rubens barichello alterado',
              '(19)99988-5555',
              $erro
    ) > 0)
    echo 'Alterado com sucesso !';
  else
  echo 'Falhou ! <br/> Motivo:<br/>'.$erro;*/

//DELETE
/*if ($A->AlunoDEL(30, //chave q está alterando
              $erro
    ) > 0)
    echo 'Excluído com sucesso !';
  else
  {
      if ($erro != "")
        echo 'Falhou ! <br/> Motivo:<br/>'.$erro;
      else
        echo 'Registro não encontrado.<br/>';
  }*/

//libera o objeto
unset($A);  

?>