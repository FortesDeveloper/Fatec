/*******************
William Fortes
2º Sem. DSM
03/2022
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
	cout << " Lista: 03 - Exercício: 08    \n";
	cout << "==============================\n";
}

int tamanho(char pnome[50], char psobrenome[50])
{
	char comp[100];
	strcat(comp, pnome);
	strcat(comp, psobrenome);
	
	return strlen(comp);
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	char nome[50], sobrenome[50];
	
	system("cls");
	Cabec();
	
	cout << "Informe o nome: ";
	cin >> nome;
	cout << "Informe o sobrenome: ";
	cin >> sobrenome;
	
    cout << "\nTamanho = " << tamanho(nome, sobrenome) << endl << endl;
    
	system("pause");
	return 0;
}
