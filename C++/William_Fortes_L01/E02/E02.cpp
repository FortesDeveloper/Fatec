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
	cout << " Lista: 01 - Exerício: 02     \n";
	cout << "==============================\n\n";
	
	char nome[20];
	string inv;
	
	cout << "Informe o nome: ";
	cin.getline(nome,20);//com char apenas
	
	int tam;
	inv = nome;
	tam = inv.length();//length com string apenas
	inv = "";
	
	for (int i = tam; i >= 0; i--) 
		inv = inv + nome[i];
	
	cout << "Nome invertido: " << inv << endl;
	
	system("pause");
	return 0;
}
