<?php

class Conn
{
    //*************************************************
    //   credenciais para cada banco
    //*************************************************
    //MySQL
    private $servername = '127.0.0.1'; //enderço servidor
    private $username   = 'PROVAP2';      //usuario de banco
    private $password   = 'SENHA';     //senha do banco
    private $dbname     = 'P2_WEB2';//nome do banco
    //*************************************************
    
    private $conn; //guarda a conexão
    private $stmt; //para o PDO
    private $_SQL; //Guarda o sql
    private $erro; //Guarda o erro
    
    //*************************************************
    //   metodos - auto executaveis/gerenciados
    //*************************************************
    public function __construct()
    {
        try 
        {
            $this->erro = "";
            $this->conn = new PDO("mysql:host=" . $this->servername . "; dbname=" . $this->dbname, $this->username, $this->password);

            if (!$this->conn)
            {
                $this->erro = "Erro de conexão";
                die($this->erro);
            }
        } catch(PDOException $e) 
        {
            $this->erro = "Erro de conexão" . $e->getMessage();
            die($this->erro);
        }
    }

    public function __destruct()
    {
        $this->conn = null;
    }
    //*************************************************

    //*************************************************
    //   metodos
    //*************************************************
    public function DriversAtivos_PDO()
    {
        echo "Drivers PDO habilitados<br/>";
        print_r(PDO::getAvailableDrivers());
        echo "<br/>";
    }

    public function getErro()
    {
        return $this->erro;
    }

    public function PreparaSQL($txt)
    {
        $this->erro = "";
        $this->_SQL = $txt;

        try 
        {
            $this->stmt = $this->conn-> prepare($txt);
            return TRUE;
        } catch(PDOException $e) 
        {
            $this->erro = "Erro ao preparar SQL" . $e->getMessage();
            return FALSE;
        }
    }

    public function Exec_SQL($CMPS)
    {
        try 
        {
            $this->erro = "";

            if ($CMPS <> null)
            {
                $this->stmt->execute( $CMPS );
            }
            else
            {
                $this->stmt->execute();
            }

            return $this->stmt->rowCount();
        } catch(PDOException $e) 
        {
            $txt = "Erro ao executar SQL: <br/>";
            $txt = $txt . "Comando: " . $this->_SQL . "<br/>";
            
            $txt = $txt . "Erro: " .$e->getMessage();
            
            $this->erro = $txt;

            return 0;
        }
    }

    public function OpenQuery($txt, $CMPS)
    {
        $this->_SQL = $txt;
        $this->erro = "";

        try 
        {
            if ($CMPS == null)
                $result = $this->conn->query($this->_SQL);
            else
            {
                if ($this->PreparaSQL($txt))
                {
                    $this->stmt->execute( $CMPS );
                    
                    $result = $this->stmt;//para usar o mesmo retorno
                }
            }
            
            return $result;
        } catch(PDOException $e) 
        {
            $txt = "Erro ao executar SQL: <br/>";
            $txt = $txt . "Comando: " . $this->_SQL . "<br/>";
            
            $txt = $txt . "Erro: " .$e->getMessage();
            
            $this->erro = $txt;
        }
    }
    //*************************************************
}

?>