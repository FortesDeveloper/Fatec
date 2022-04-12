/*******************
William Fortes
2º Sem. DSM
02/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
//#include <cstring>
#include <iostream>

using namespace std;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 02 - Exercício: 13    \n";
	cout << "==============================\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	string nome;
	int tam;
	int vet[5] = {0,0,0,0,0};
	
	system("cls");
	Cabec();
	cout << "Informe o nome: ";
	cin >> nome;
	
	tam = nome.length();
	for (int i = 0; i < tam; i++)
	{
		if ((nome[i] == 'a') || (nome[i] == 'A'))
		  vet[0] = vet[0] + 1;
		else if ((nome[i] == 'e') || (nome[i] == 'E'))
		  vet[1] = vet[1] + 1;
		else if ((nome[i] == 'i') || (nome[i] == 'I'))
		  vet[2] = vet[2] + 1;
		else if ((nome[i] == 'o') || (nome[i] == 'O'))
		  vet[3] = vet[3] + 1;
		else if ((nome[i] == 'u') || (nome[i] == 'U'))
		  vet[4] = vet[4] + 1;
	}
	
	cout << endl;
	cout << "Quantidade de letras A/a => " << vet[0] << endl;
	cout << "Quantidade de letras E/e => " << vet[1] << endl;
	cout << "Quantidade de letras I/i => " << vet[2] << endl;
	cout << "Quantidade de letras O/o => " << vet[3] << endl;
	cout << "Quantidade de letras U/u => " << vet[4] << endl<< endl;
	
	system("pause");
	return 0;
}
