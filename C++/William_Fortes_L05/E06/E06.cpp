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
//variáveis
//--------------------------------------------------------------
int tam = 3;

int    vi[3];
double vd[3];
char   vc[3];

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exercício: 06    \n";
	cout << "==============================\n";
}

lerinteiros()
{
	for (int i= 0; i < tam; i++)
	{
		system("cls");
		Cabec();
		
		cout << "Informe o "<<i+1<<"º nº inteiro: ";
		cin >> vi[i];
	}
}

lerdecimais()
{
	for (int i= 0; i < tam; i++)
	{
		system("cls");
		Cabec();
		
		cout << "Informe o "<<i+1<<"º nº decimal: ";
		cin >> vd[i];
	}
}

lerchar()
{
	for (int i= 0; i < tam; i++)
	{
		system("cls");
		Cabec();
		
		cout << "Informe o "<<i+1<<"º nº caracter: ";
		cin >> vc[i];
	}
}

trocavalores()
{
	int    *pi;
	double *pd;
	char   *pc;
	
	for (int i= 0; i < tam; i++)
	{
		pi  = &vi[i];
		*pi = 2014;
		
		pd  = &vd[i];
		*pd = 9.99;
		
		pc  = &vc[i];
		*pc = 'Y';
	}
}

listar()
{
	system("cls");
	Cabec();
	
	cout << "\n\nListagem de valores\n";
	cout << "-----------------------------------------\n";
	cout << "| POSIÇÃO | ITEIRO | DECIMAL | CARACTER |\n";
	cout << "-----------------------------------------\n";
	
	for (int i= 0; i < tam; i++)
	{
		cout << "    "<<
		      i+1   << "     | "<<
		      vi[i] << "   | "<<
		      vd[i] << "    | "<<
		      vc[i] << endl;
	}
}

//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	lerinteiros();
	lerdecimais();
	lerchar();
	
	trocavalores();
	listar();
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
