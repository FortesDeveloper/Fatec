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
	cout << " Lista: 02 - Exercício: 09    \n";
	cout << "==============================\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int vet0[10];
	int vet1[10];
	int aux;
	int aux2;
	
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
	for (int i = 0; i < 10; i++)
	{
		aux = vet0[i]; //auxiliar numero a ordenar
		if (i == 0)
			vet1[i] = aux;
		else
		{
			for (int j = 0; j < i; j++) //i controla o limite
				if (aux < vet1[j])
				{
					aux2    = vet1[j];
					vet1[j] = aux;
					aux     = aux2;
				}
			vet1[i] = aux;
		}		
	}
	
	cout << "\nVETOR -> ORDENADO\n";
	for (int i = 0; i < 10; i++)
		cout << "[" << i+1 << "]=" << vet1[i] << "   ";
	
	cout << endl << endl;
	
	system("pause");
	return 0;
}
