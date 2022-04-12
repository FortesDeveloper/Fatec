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
int tam = 5;

struct TAtleta{
	char  nome[50]; 
	int   posicao; 
	int   idade;
	float altura;
};
struct TAtleta atleta[5];

struct TIdxIdade{
	int ind; 
	int idade;
};
struct TIdxIdade idx[5];
//--------------------------------------------------------------

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exercício: 01    \n";
	cout << "==============================\n";
}

indexIdade(int ctrl)
{
	struct TIdxIdade aux;
	struct TIdxIdade tmp;
	
	aux.ind   = ctrl;
	aux.idade = atleta[ctrl].idade;
	
	for (int i = 0; i < ctrl; i++)
	{
		if (idx[i].idade < aux.idade)
		{
			//guarda os valores onde está
			tmp.ind   = idx[i].ind;
			tmp.idade = idx[i].idade;
			//altera os valores
			idx[i].ind   = aux.ind;
			idx[i].idade = aux.idade;
			//recupera e seta valores
			aux.ind   = tmp.ind;
			aux.idade = tmp.idade;
		}
	}
	//atualiza a ultima posicao/posicao 0
	idx[ctrl].ind   = aux.ind;
	idx[ctrl].idade = aux.idade;
}

carga()
{
	for (int i = 0; i < tam; i++)
	{
		system("cls");
		Cabec();
		cout << "\nInforme os dados do atleta [" << i+1 << "] \n";
		cout << "----------------------------------------\n";
		cout << "Nome: ";
		cin >> atleta[i].nome;
		cout << "Posição: ";
		cin >> atleta[i].posicao;
		cout << "Idade: ";
		cin >> atleta[i].idade;
		cout << "Altura: ";
		cin >> atleta[i].altura;
		
		indexIdade(i);
	}
}

listar()
{
	system("cls");
	Cabec();
	cout << "\n\nListagem dos atletas por ordem de idade decrescente\n";
	cout << "------------------------------------------------------------\n";
	cout << "IDADE | NOME | POSIÇÃO | ALTURA\n";
	cout << "------------------------------------------------------------\n";
	for (int i = 0; i < tam; i++)
	{
		//cout << idx[i].ind << " | " << idx[i].idade << endl; //<= conferencia simples
		cout << atleta[ idx[i].ind ].idade << " | " <<
		        atleta[ idx[i].ind ].nome << " | " <<
		        atleta[ idx[i].ind ].posicao << " | " <<
		        atleta[ idx[i].ind ].altura << endl;
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
