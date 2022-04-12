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
	cout << " Lista: 03 - Exercício: 05    \n";
	cout << "==============================\n";
}

int func(float v1, float v2, float v3)
{
	float calc;
	calc = (v1 * v1) + v2 + v3;
	
	return (int)calc;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	float v1, v2 ,v3;
	
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
