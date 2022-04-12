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
	cout << " Lista: 02 - Exercício: 05    \n";
	cout << "==============================\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	char v1[50];
	char v2[50];
	
	system("cls");
	Cabec();
	cout << "\nInforme o nome :";
	cin >> v1;
	strcpy(v2, v1);
	
	cout << "\nCópia = " << v2 <<endl;
	
	system("pause");
	return 0;
}
