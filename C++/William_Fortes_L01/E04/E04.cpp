/*******************
William Fortes
2º Sem. DSM
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
	cout << " Lista: 01 - Exerício: 04     \n";
	cout << "==============================\n\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	float gF[10];
	float gC[10];
	
	for (int i = 0; i < 10; i++) 
	{
		Cabec();
		
		cout << "Informe "<<i+1<<"a. Temperatuda em graus Fahrenheit: ";
		cin >> gF[i];
		
		gC[i] = ((5.0/9.0) * (gF[i] - 32));
    }
    
    Cabec();
    cout << "Resultado da conversão\n" << "POS    Fahrenheit     Celcius  \n";
	for (int i = 0; i < 10; i++) 
		cout <<  i+1 << "  |  "<< gF[i] << "  |  " << gC[i] << endl;
	
	system("pause");
	return 0;
}
