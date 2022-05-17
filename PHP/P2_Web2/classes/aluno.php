<?php

include_once 'conn.php';

class Aluno
{
    private $erro = ""; //Guarda o erro
    private $DB   = "";

    //*************************************************
    //   SELECTS
    //*************************************************
    private $sql_ins = 'INSERT INTO ALUNO(ID_ALUNO,
                                          CPF,
                                          NOME,
                                          FONE,
                                          EMAIL) 
                                   VALUES(NEXT VALUE FOR ALUNO_SEQ,
                                          :CPF,
                                          :NOME,
                                          :FONE,
                                          :EMAIL)';

    private $sql_upd = 'UPDATE  ALUNO 
                           SET  CPF    = :CPF,
                                NOME   = :NOME,
                                FONE   = :FONE,
                                EMAIL  = :EMAIL
                          WHERE ID_ALUNO = :ID_ALUNO';

    private $sql_del = 'DELETE 
                          FROM ALUNO 
                         WHERE ID_ALUNO = :ID_ALUNO';

    private $sql_lst = 'SELECT ID_ALUNO, NOME, CPF, FONE, EMAIL FROM ALUNO';

    private $sql_loc = 'SELECT COUNT(*) REGS FROM ALUNO WHERE ID_ALUNO = :ID_ALUNO';

    private $sql_get = 'SELECT ID_ALUNO, NOME, CPF, FONE, EMAIL FROM ALUNO WHERE ID_ALUNO = :ID_ALUNO';
    //*************************************************

    //*************************************************
    //   MÉTODOS 
    //*************************************************
    public function AlunoADD($CPF,
                             $NOME,
                             $FONE,
                             $EMAIL,
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
                                                ':FONE'  => $FONE,
                                                ':EMAIL' => $EMAIL
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
                             $EMAIL,
                             &$erro)
    {
        try 
        {
            $this->DB = new Conn;

            $sql = $this->sql_upd;

            if ($this->DB->PreparaSQL($sql))
            {
                $rec = $this->DB->Exec_SQL( array (
                                        ':ID_ALUNO'  => $ID_ALUNO,
                                        ':CPF'       => $CPF,
                                        ':NOME'      => $NOME,
                                        ':FONE'      => $FONE,
                                        ':EMAIL'     => $EMAIL
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

    public function AlunoDEL($ID_ALUNO, &$erro)
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

    public function AlunoListar(&$erro)
    {
        try 
        {
            $this->DB = new Conn;

            $sql = $this->sql_lst;

            //return $this->DB->OpenQuery($sql, null);
            $result = $this->DB->OpenQuery($sql, null);
            return $result->fetchAll();
        } catch(PDOException $e) 
        {
            echo 'Erro: ' . $e->getMessage();
        }
        unset($this->DB);
    }    

    public function AlunoExiste($ID_ALUNO, &$erro)
    {
        try 
        {
            $this->DB = new Conn;

            $sql = $this->sql_loc;

            return $this->DB->OpenQuery($sql, array (
                                                    ':ID_ALUNO' => $ID_ALUNO
                                                    ));
        } catch(PDOException $e) 
        {
            echo 'Erro: ' . $e->getMessage();
        }
        unset($this->DB);
    } 

    public function AlunoGet($ID_ALUNO, &$erro)
    {
        try 
        {
            $this->DB = new Conn;

            $sql = $this->sql_get;

            return $this->DB->OpenQuery($sql, array (
                                                    ':ID_ALUNO' => $ID_ALUNO
                                                    ));
        } catch(PDOException $e) 
        {
            echo 'Erro: ' . $e->getMessage();
        }
        unset($this->DB);
    }     
    //*************************************************
}

?>