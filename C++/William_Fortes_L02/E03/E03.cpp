/*******************
William Fortes
2º Sem. DSM
02/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int digitados = 0;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 02 - Exercício: 03    \n";
	cout << "==============================\n";
	cout << "Digitados [" << digitados << "]        Exit(-50)\n\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	float n;
	float soma  = 0;
	float media = 0;
	int p = -1;
	
	do
	{
		system("cls");
		Cabec();
		cout << "Informe um nº :";
		cin >> n;
		digitados ++;
		
		if ((n != -53) and (n > 0))
		{
			soma  = soma + n;
			if (media > 0)
				media = (media + n) / 2;
			else
				media = n;
		}
	} while (n != -50);
	
	cout << "\n\nSoma dos valores digitados:  " << soma <<endl;
	cout << "Média dos valores digitados: " << media <<endl;
	
	system("pause");
	return 0;
}
