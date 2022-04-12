/*******************
William Fortes
2º Sem. DSM
02/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 02 - Exercício: 08    \n";
	cout << "==============================\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	char sobrenome[50];
	int r;
	
	system("cls");
	Cabec();
	cout << "\nInforme o nome: ";
	cin >> nome;
	cout << "\nInforme o sobrenome: ";
	cin >> sobrenome;
	
	r = strcmp(nome, sobrenome);
	
	if (r < 0)
		cout << "\nMenor" << endl;
	else if (r > 0)
		cout << "\nMaior" << endl;
	else
		cout << "\nIgual" << endl;
	
	system("pause");
	return 0;
}
