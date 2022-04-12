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
int tam = 10;
double reajuste = 4.78; //reajuste de 4,78 %

struct TProdutos{
	char   nome[50]; 
	double valor;
};
struct TProdutos prod[10];

double prodreaj[10];
//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exercício: 07    \n";
	cout << "==============================\n";
}

carga()
{
	for (int i= 0; i < tam; i++)
	{
		system("cls");
		Cabec();
		
		cout << "Informe nome do produto ["<<i+1<<"]: ";
		cin >> prod[i].nome;
		
		cout << "Informe valor: ";
		cin >> prod[i].valor;
	}
}

reajustar()
{
	double *pd;
	double vlr;
	
	for (int i= 0; i < tam; i++)
	{
		pd  = &prod[i].valor;
		
		vlr = *pd  //valor atual
		       + 
			  ((*pd / 100) * reajuste); //valor do reajuste
		
		pd = &vlr;
		
		prodreaj[i] = *pd;
	}
}

listar()
{
	double *pd;
	
	system("cls");
	Cabec();
	
	cout << "\n\nListagem de valores\n";
	cout << "------------------------------------------\n";
	cout << "| ITEM | VLR> ORIGINAL | VLR. REAJUSTADO |\n";
	cout << "------------------------------------------\n";
	
	for (int i= 0; i < tam; i++)
	{
		pd = &prodreaj[i];
		
		cout << 
		      i+1   << "- " << 
			  prod[i].nome << " | " <<
		      prod[i].valor << " | "<<
		      *pd << endl;
	}
}

//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	carga();
	reajustar();
	listar();
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
