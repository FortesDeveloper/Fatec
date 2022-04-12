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
	cout << " Lista: 03 - Exercício: 01    \n";
	cout << "==============================\n";
}

float volume(float pRaio, float pAltura)
{
	return 3.1415 * (pRaio * pRaio) * pAltura;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	float raio, altura;
	
	system("cls");
	Cabec();
	cout << "\nInforme o raio: ";
	cin >> raio;
	cout << "\nInforme a altura: ";
	cin >> altura;
	
	cout << "\nO volume é " << volume(raio, altura) << endl;
	
	system("pause");
	return 0;
}
