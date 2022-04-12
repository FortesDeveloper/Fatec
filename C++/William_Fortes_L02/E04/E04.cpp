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
	cout << " Lista: 02 - Exercício: 04    \n";
	cout << "==============================\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
    int n;
	int vet0[10];
	int vet1[10];
	int vet2[10];
	int vet3[10];
    float media;
	
	for (int i = 0; i < 10; i++) 
	{
		system("cls");
		Cabec();
		cout << "Informe um " << i+1 <<"º número: ";
		cin >> n;
		
		vet0[i] = n;
		if (media > 0)
			media = (media + n) / 2;
		else
			media = n;
	};
	
	system("cls");
	Cabec();
	cout << "VETOR -> INFORMADO\n";
	for (int i = 0; i < 10; i++) 
		cout << "[" << i+1 << "]=" << vet0[i] << "   ";
	
	cout << "\n\nVETOR -> SUBSEQUENTE\n";
	for (int i = 0; i < 10; i++) 
	{
		n = vet0[i];
		vet1[i] = n + (n + 1);
		
		cout << "[" << i+1 << "]=" << vet1[i] << "   ";
	}
	
	cout << "\n\nVETOR -> VALOR + MÉDIA\n";
	cout << "Média: " << media << endl;
	for (int i = 0; i < 10; i++) 
	{
		n = vet0[i];
		vet2[i] = n + media;
		
		cout << "[" << i+1 << "]=" << vet2[i] << "   ";
	}
	
	cout << "\n\nVETOR -> n + (n * n) \n";
	for (int i = 0; i < 10; i++) 
	{
		n = vet0[i];
		vet3[i] = n * (n * n);
		
		cout << "[" << i+1 << "]=" << vet3[i] << "   ";
	}
	cout << endl << endl;
	
	system("pause");
	return 0;
}
