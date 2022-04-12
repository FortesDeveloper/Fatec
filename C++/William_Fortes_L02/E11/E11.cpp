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
	cout << " Lista: 02 - Exercício: 11    \n";
	cout << "==============================\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int vet0[10];
	int maior;
	int menor;
	
	for (int i = 0; i < 10; i++) 
	{
		system("cls");
		Cabec();
		cout << "Informe um " << i+1 <<"º número: ";
		cin >> vet0[i];
	};
	
	system("cls");
	Cabec();
	
	cout << "\n\nVETOR -> DIGITADO\n";
	for (int i = 0; i < 10; i++)
		cout << "[" << i+1 << "]=" << vet0[i] << "   ";
	
	//ordena
	menor = 9999999;
	maior = -111111;
	for (int i = 0; i < 10; i++)
	{
		if (vet0[i] < menor)
		   menor = vet0[i];
		if (vet0[i] > maior)
		   maior = vet0[i];
	}
	
	cout << "\n\nMenor valor digitado: " << menor;
	cout << "\nMaior valor digitado: "   << maior;
	cout << endl << endl;
	
	system("pause");
	return 0;
}
