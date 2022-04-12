/*******************
William Fortes
2º Sem. DSM
02/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

Cabec()
{
	system("cls");
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 01 - Exerício: 06     \n";
	cout << "==============================\n\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	
	Cabec();
	cout << "Informe o nome: ";
	cin.getline(nome,50);
    
    cout << "\n4 primeiras letras\n";
    for (int i =0; i < 4; i++) 
		cout << nome[i];
	
	cout << endl;
	
	system("pause");
	return 0;
}
