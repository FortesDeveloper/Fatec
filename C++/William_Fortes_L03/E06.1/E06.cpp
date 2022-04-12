/*******************
William Fortes
2º Sem. DSM
03/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>
#include <math.h>

using namespace std;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 03 - Exercício: 06    \n";
	cout << "==============================\n";
}


int func(float x, float y, float z)
{
	float calc;
	
	// (x^2 / y^2) + y^z
	calc = (pow(x,2.0) / pow(y,3.0)) + pow(y,z);
	
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
