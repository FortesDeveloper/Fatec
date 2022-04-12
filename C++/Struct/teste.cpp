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
	int *ptr = NULL; // declaração de ponteiro e definição 
	
	cout << endl << "1. Ponteiro ptr aponta para o endereço da variável dado" << endl;
	ptr = &dado; /* Ponteiro ptr aponta para o endereço da variável dado */
	//ptr = dado; causa erro de conversão de tipos
	// ptr = m; causa erro de conversão de tipos. Ponteiro de int tem que apontar para endereço de int
	cout << *ptr << endl; // exibe o endereço que o ponteiro aponta
	
}
