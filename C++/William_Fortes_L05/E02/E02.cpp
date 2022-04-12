/*******************
William Fortes
2º Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

//--------------------------------------------------------------
//variaveis globais
//--------------------------------------------------------------
int    tam = 5;
int    codigo[5];
double preco[5];

struct TProduto{
	char   nome[30];
	int    *codigo;
	double *preco;
	char   fornecedor[50];
};
struct TProduto prod[5];

//--------------------------------------------------------------

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exercício: 02    \n";
	cout << "==============================\n";
}

carga()
{
	for (int i = 0; i < tam; i++)
	{
		system("cls");
		Cabec();
		cout << "\nInforme os dados do produto [" << i+1 << "] \n";
		cout << "----------------------------------------\n";
		
		cout << "Nome: ";
		cin >> prod[i].nome;
		
		cout << "Cóodigo: ";
		prod[i].codigo = &codigo[i];//1º seta o endereçamento de memória
		cin >> *prod[i].codigo;     //apoós definir o endereçamento joga o valor pela leitura
		
		cout << "Preço: ";
		prod[i].preco = &preco[i];
		cin >> *prod[i].preco;
		
		cout << "Fornecedor: ";
		cin >> prod[i].fornecedor;
	}
}

listar()
{
	system("cls");
	Cabec();
	cout << "\n\nListagem dos produtos\n";
	cout << "------------------------------------------------------------\n";
	cout << "CÓDIGO | NOME | FORNECEDOR | VALOR\n";
	cout << "------------------------------------------------------------\n";
	for (int i = 0; i < tam; i++)
	{
		cout << *prod[i].codigo << " | " <<
		        prod[i].nome << " | " <<
		        prod[i].fornecedor << " | " <<
		        *prod[i].preco << endl;
	}
}
//--------------------------------------------------------------

//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	//leitura
	carga();
	//listagem
	listar();
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
