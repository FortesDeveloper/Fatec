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
	cout << " Lista: 03 - Exercício: 03    \n";
	cout << "==============================\n";
}

int fibonacci(int pQtde)
{
	int F   = 0;
	int ant = 0;
	
	for (int i = 0; i < pQtde; i++)
		if (i == 1) 
	    {
        	F = 1;
        	ant = 0;
        } 
		else 
		{
        	F += ant;
        	ant = F - ant;
        }
	
	return F;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int qtde = 15;
	
	system("cls");
	Cabec();
	
	cout << "\nSérie de Fibonacci para os " << qtde <<" primeiros números\n";
	for (int i = 0; i < qtde; i++) 
    	cout << fibonacci(i) << ", ";
    
	cout << endl << endl;
    
	system("pause");
	return 0;
}
