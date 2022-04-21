/*******************
William Fortes
2º Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>
#include <string.h>

using namespace std;

//--------------------------------------------------------------
//variáveis
//--------------------------------------------------------------
int tam = 5;

int notas[5];

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 06 - Exercício: 02    \n";
	cout << "==============================\n";
}

ler()
{
	system("cls");
	Cabec();
	
	for (int i= 0; i < tam; i++)
	{
		system("cls");
		Cabec();
		
		cout << "Digite a "<<i+1<<"ª nota: ";
		cin >> notas[i];
	}
}

media(int n[])
{
	system("cls");
	Cabec();
	
	double t = 0;
	
	for (int i= 0; i < tam; i++)
	  t = t + n[i];
	
	return (t / tam);
}
//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	ler();
	
	double m = media(notas);
	
	system("cls");
	Cabec();
	
	cout << "Média: " << m << endl;
	if (m > 5)
		cout << "Aprovado !";
	else if ((m <= 5) and (m >= 3))
		cout << "De recuperação";
	else
		cout << "Reprovou";
	
	cout << endl << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
