/*******************
William Fortes
2º Sem. DSM
02/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 02 - Exercício: 12    \n";
	cout << "==============================\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	string nome;
	string sexo;
	int idade;
	
	system("cls");
	Cabec();
	cout << "Informe o nome: ";
	cin >> nome;
	cout << "Informe o sexo [M]masculino / [F]feminino: ";
	cin >> sexo;
	cout << "Informe a idade: ";
	cin >> idade;
	
	if (((sexo == "F") || (sexo == "f")) && (idade < 25))
		cout << "\n\nACEITA";
	else
		cout << "\n\nNÃO ACEITA";
	cout << endl << endl;
	
	system("pause");
	return 0;
}
