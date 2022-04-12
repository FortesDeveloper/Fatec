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
	cout << " Lista: 03 - Exercício: 02    \n";
	cout << "==============================\n";
}

float conversao(float pCelcius)
{
	return ((9 * pCelcius) + 160) / 5;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	float Celcius;
	
	system("cls");
	Cabec();
	cout << "\nInforme os graus Celcius: ";
	cin >> Celcius;
	
	cout << "\nConvertido para Fahrenheit => " << conversao(Celcius) << endl;
	
	system("pause");
	return 0;
}
