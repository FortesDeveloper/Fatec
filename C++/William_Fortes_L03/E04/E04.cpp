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
	cout << " Lista: 03 - Exercício: 04    \n";
	cout << "==============================\n";
}

int dif(int v[])
{
	int soma = 0, maior = 0;
	int media = 0, dif = 0;
	
	for (int i =0; i < 10; i++)
	{
		soma = soma + v[i];
		
		if (v[i] > maior)
		  maior = v[i];
	}
	
	media = soma / 10;
	dif = maior - media;
	if (dif < 0)
		dif = dif * -1;
	
	cout << "\n\nMaior valor => " << maior;
	cout << "\nMedia => " << media;
	
	return dif;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int vetor[10];
	
	for (int i =0; i < 10; i++)
	{
		system("cls");
		Cabec();
		cout << "Informe a posição " << i+1 << ": ";
		cin >> vetor[i];
	}
	
	cout << "\nDiferença entre o maior valor e a média =>  " << dif(vetor) << endl << endl;
    
	system("pause");
	return 0;
}
