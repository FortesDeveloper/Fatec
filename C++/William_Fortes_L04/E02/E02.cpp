/*******************
William Fortes
2º Sem. DSM
03/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 04 - Exercício: 02    \n";
	cout << "==============================\n";
}

string int2str(int num)
{
	stringstream ss;
	ss << num;
	return ss.str();
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	string msg;
	int vetor[4][4];
	
	//leitura
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			system("cls");
			Cabec();
			
			msg = "\nInforme o elemento LINHA["+int2str(i+1)+"] "+"COLUNA["+int2str(j+1)+"]: ";
			cout << msg;
			cin >> vetor[i][j];
		}
	
	//imprimindo matriz - diagonal
	cout << "\n\nOs números na diagonal da matriz são:\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j)
				cout << vetor[i][j] <<", ";
		}
	}
	cout << endl << endl;
	system("pause");
	return 0;
}
