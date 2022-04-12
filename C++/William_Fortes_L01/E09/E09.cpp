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
	cout << " Lista: 01 - Exerício: 09     \n";
	cout << "==============================\n\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	string auxnome = "";
	
	Cabec();
	cout << "Informe o nome: ";
	cin.getline(nome,50);
    
    int tam;
	auxnome = nome;
	tam = auxnome.length();
    cout << "\nO nome tem:\n- "<< tam << " caracteres\n";
    
    int chars = 0;
    for (int i = 0; i < tam; i++) 
		if (auxnome[i] != ' ')
			chars++;
	
	cout << "- "<< chars << " letras\n";
	cout << "- "<< tam-chars << " espaços em branco\n";
	
	
	system("pause");
	return 0;
}
