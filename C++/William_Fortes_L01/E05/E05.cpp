/*******************
William Fortes
2� Sem. DSM
02/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

Cabec()
{
	system("cls");
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 01 - Exer�cio: 05     \n";
	cout << "==============================\n\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int valores[10];
	
	for (int i = 0; i < 10; i++) 
	{
		Cabec();
		
		cout << "Informe o "<<i+1<<"o. n�mero : ";
		cin >> valores[i];
    }
    
    Cabec();
    cout << "N�meros �mpares\n";
	for (int i = 0; i < 10; i++) 
		if (valores[i] % 2 == 0)
			cout <<  "Posi��o: " <<i+1 << " => " << valores[i] << endl;
	
	system("pause");
	return 0;
}
