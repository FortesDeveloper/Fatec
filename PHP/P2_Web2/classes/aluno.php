<?php

include_once 'conn.php';

class Pessoa
{
    private $erro = ""; //Guarda o erro
    private $DB   = "";

    //*************************************************
    //   SELECTS
    //*************************************************
    private $sql_ins = 'INSERT INTO ALUNO(ID_ALUNO,
                                          CPF,
                                          NOME,
                                          FONE) 
                                   VALUES(NEXT VALUE FOR ALUNO_SEQ,
                                          :CPF,
                                          :NOME,
                                          :FONE)';

    private $sql_upd = 'UPDATE  ALUNO 
                           SET  CPF    = :CPF,
                                NOME   = :NOME,
                                FONE   = :FONE
                          WHERE ID_ALUNO = :ID_ALUNO';

    private $sql_del = 'DELETE 
                          FROM ALUNO 
                         WHERE ID_ALUNO = :ID_ALUNO';
    //*************************************************

    //*************************************************
    //   MÉTODOS 
    //*************************************************
    public function AlunoADD($CPF,
                             $NOME,
                             $FONE,
                             &$erro)
    {
        try 
        {
            $this->DB = new Conn;
            
            $sql = $this->sql_ins;

            if ($this->DB->PreparaSQL($sql))
            {
                $rec = $this->DB->Exec_SQL( array (
                                                ':CPF'   => $CPF,
                                                ':NOME'  => $NOME,
                                                ':FONE'  => $FONE
                                            ));
                
                $erro = $this->DB->getErro();

                return $rec;
            }
        } catch(PDOException $e) 
        {
            $this->erro = 'Erro: ' . $e->getMessage();
        }
        unset($this->DB);
    }

    public function AlunoUPD($ID_ALUNO,
                             $CPF,
                             $NOME,
                             $FONE,
                             &$erro)
    {
        try 
        {
            $this->DB = new Conn;

            $sql = $this->sql_updMYSQL;

            if ($this->DB->PreparaSQL($sql))
            {
                $rec = $this->DB->Exec_SQL( array (
                                        ':ID_ALUNO'  => $ID_ALUNO,
                                        ':CPF'       => $CPF,
                                        ':NOME'      => $NOME,
                                        ':FONE'      => $FONE
                                      ));
                
                $erro = $this->DB->getErro();
                
                return $rec;                    
            }
        } catch(PDOException $e) 
        {
            $this->erro = 'Erro: ' . $e->getMessage();
        }
        unset($this->DB);
    }

    public function PessoaDEL($ID_ALUNO, &$erro)
    {
        try 
        {
            $this->DB = new Conn;

            $sql = $this->sql_del;

            if ($this->DB->PreparaSQL($sql))
            {
                $rec = $this->DB->Exec_SQL( array (
                                        ':ID_ALUNO' => $ID_ALUNO
                                    ));
                
                $erro = $this->DB->getErro();

                return $rec;
            }
        } catch(PDOException $e) 
        {
            echo 'Erro: ' . $e->getMessage();
        }
        unset($this->DB);
    }    
    //*************************************************
}
/*$nome = $_POST['nome'];
$endereco = $_POST['endereco'];
$cpf = $_POST['cpf'];
$idade = $_POST['idade'];
$sexo = $_POST['sexo'];*/

/*$DB = new Conn;

$DB->adicionar_cliente($nome, $endereco, $idade, $cpf, $sexo);

unset($DB);*/

$P = new Pessoa;

//INSERT 
/*
if ($P->PessoaADD(11167662,
              'Rubens barichello',
              '(19)99988-5555',
              'S',
              'semnenha',
              'eu@uol.com.br',
              'S',
              'S',
              'S',
              'CTZ2-Marinha 289545-ALPHA',
              'telefone da visinha 19-65899-9999 Joana Dark',
              'Rua Godofredo Bartolomeu',
              600,
              'Bairro Boa Vista',
              'Cidade de Deus',
              13488760,
              'bloco 20 apto 88',
              'SP',
              $erro
    ) > 0)
    echo 'Inserido com sucesso !';
  else
  echo 'Falhou ! <br/> Motivo:<br/>'.$erro;
*/

//UPDATE
/*if ($P->PessoaUPD(30, //chave q está alterando
              'Rubens barichello alterado',
              '(19)99988-5555',
              'S',
              'eu@uol.com.br',
              'S',
              'S',
              'S',
              'CTZ2-Marinha 289545-ALPHA',
              'telefone da visinha 19-65899-9999 Joana Dark',
              'Rua Godofredo Bartolomeu',
              600,
              'Bairro Boa Vista',
              'Cidade de Deus',
              13488760,
              'bloco 20 apto 88',
              'SP',
              $erro
    ) > 0)
    echo 'Alterado com sucesso !';
  else
  echo 'Falhou ! <br/> Motivo:<br/>'.$erro;*/

//DELETE
if ($P->PessoaDEL(30, //chave q está alterando
              $erro
    ) > 0)
    echo 'Excluído com sucesso !';
  else
  {
      if ($erro != "")
        echo 'Falhou ! <br/> Motivo:<br/>'.$erro;
      else
        echo 'Registro não encontrado.<br/>';
  }

unset($P);  

?>