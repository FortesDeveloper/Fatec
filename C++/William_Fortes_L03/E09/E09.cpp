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
	cout << " Lista: 03 - Exercício: 09    \n";
	cout << "==============================\n";
}

void parimpar(int pnum)
{
	string msg = "";
	
	if (pnum % 2 == 0)
	  msg = "É par";
	else
	  msg = "É impar";
	  
	cout << endl << msg << endl << endl;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	system("cls");
	Cabec();
	
	cout << "Informe o nº: ";
	cin >> num;
	parimpar(num);
	
	system("pause");
	return 0;
}
