#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
using namespace std;
int main()
{
	float m = 'a';
	cout << m;
	
	int dado = 5;
	int *ptr = NULL; // declara��o de ponteiro e defini��o 
	
	cout << endl << "1. Ponteiro ptr aponta para o endere�o da vari�vel dado" << endl;
	ptr = &dado; /* Ponteiro ptr aponta para o endere�o da vari�vel dado */
	//ptr = dado; causa erro de convers�o de tipos
	// ptr = m; causa erro de convers�o de tipos. Ponteiro de int tem que apontar para endere�o de int
	cout << *ptr << endl; // exibe o endere�o que o ponteiro aponta
	
}
