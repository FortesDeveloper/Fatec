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
	cout << " Lista: 03 - Exercício: 06    \n";
	cout << "==============================\n";
}

int func(int v1, int v2, int v3)
{
	return (v1 * v1) + v2 + v3;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int v1, v2 ,v3;
	
	system("cls");
	Cabec();
	
	cout << "Informe o 1º valor: ";
	cin >> v1;
	cout << "Informe o 2º valor: ";
	cin >> v2;
	cout << "Informe o 3º valor: ";
	cin >> v3;
	
	cout << "\nResultado =>  " << func(v1, v2, v3) << endl << endl;
    
	system("pause");
	return 0;
}
