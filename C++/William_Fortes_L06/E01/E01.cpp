/*******************
William Fortes
2º Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <string.h>

using namespace std;

//--------------------------------------------------------------
//variáveis
//--------------------------------------------------------------
char entrada[100] = "";

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 06 - Exercício: 01    \n";
	cout << "==============================\n";
}

carga()
{
	system("cls");
	Cabec();
	
	cout << "Digite (SIM/NAO): ";
	cin.getline(entrada,100);
}

teste(char c[100])
{
	system("cls");
	Cabec();
	
    for (int i = 0; i < strlen(c); i++)
    	//putchar(toupper(c[i]));
    	c[i] = toupper(c[i]);
    
	string c2 = c;
	if (c2 == "NAO")
		return 0;
	else if (c2 == "SIM")
		return 1;
	else
		return -1;
}
//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	carga();
	
	int r = teste(entrada);
	
	system("cls");
	Cabec();
	
	if (r == 1)
		cout << "Digitou SIM";
	else if (r == 0)
		cout << "Digitou NAO";
	else
		cout << "Digitou outra coisa";
	
	cout << endl << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
