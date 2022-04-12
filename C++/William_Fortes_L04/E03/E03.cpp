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
	cout << " Lista: 04 - Exercício: 03    \n";
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
	int vetor[3][3];
	int vetor2[3][3];
	
	//leitura
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			system("cls");
			Cabec();
			
			msg = "\nInforme o elemento LINHA["+int2str(i+1)+"] "+"COLUNA["+int2str(j+1)+"]: ";
			cout << msg;
			cin >> vetor[i][j];
		}
		
	//gerando matriz 2
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			if ((vetor[i][j]) % 2 == 0)
				vetor2[i][j] = 1;
			else
				vetor2[i][j] = -1;
		}	
	
	//imprimindo matriz 2
	cout << "\n\nMatriz 2 gerada\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << vetor2[i][j] <<", ";
		}
		cout << endl;
	}
	cout << endl;
	
	system("pause");
	return 0;
}
