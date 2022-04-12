/*******************
William Fortes
2º Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exercício: 04    \n";
	cout << "==============================\n";
}

//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	Cabec();
	
	char* nome1 = "Luis";
    char* nome2 = "Fernando";
    char* nome3 = "Vitoria";
    char* nome4 = "Leticia";
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
