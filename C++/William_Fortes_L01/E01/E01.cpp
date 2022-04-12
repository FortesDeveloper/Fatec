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

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	//system("clear");
	system("cls");
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 01 - Exerício: 01     \n";
	cout << "==============================\n\n";
	
	int soma =0;
	
	for (int i = 0; i <= 100; i++) 
		soma = soma + i;
	
	cout << "Resultado: " << soma << endl;
	
	system("pause");
	return 0;
}
