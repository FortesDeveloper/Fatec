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

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	//system("clear");
	system("cls");
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 01 - Exer�cio: 03     \n";
	cout << "==============================\n\n";
	
	int numdig  = 0;
	int prodnum = 1;
	
	cout << "Informe um n�mero: ";
	cin >> numdig;
	
	cout << "\n\nSequ�ncia dos n�meros\n";
	for (int i = 1; i <= numdig; i++) 
	{
		cout << i << endl;
		prodnum = prodnum * i;
	}
	
	cout << "\nProduto dos n�meros: " << prodnum << endl;
	
	system("pause");
	return 0;
}
