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
int tam = 9;

int num[9];
//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exercício: 10    \n";
	cout << "==============================\n";
}

carga()
{
	int n;
	int *pi;
	pi = &n;
	
	for (int i= 0; i < tam; i++)
	{
		system("cls");
		Cabec();
		
		cout << "Informe o "<<i+1<<"º nº: ";
		cin >> *pi;
		num[i] = *pi;
	}
}

ordenar()
{
	int temp;
	int *p1, *p2, *ptemp;
	ptemp = &temp;
	
    for(int i=0; i<(tam-1); i++)
    {
    	for (int j=0; j<(tam-i-1); j++)
    	{
        	if (num[j] > num[j+1])
            {
            	p1 = &num[j];
            	p2 = &num[j+1];
				
				*ptemp = *p1;
            	*p1    = *p2;
            	*p2    = *ptemp;
            }
        }
    }
}

listarVetor()
{
	int *ptr;
	
	system("cls");
	Cabec();
	cout << "\n\nNúmeros ordenados [Vetor]\n";
	for (int i = 0; i < tam; i++)
	{
		ptr = &num[i];
		cout << *ptr << ", ";
	}
	cout << endl;
}

//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	carga();
	ordenar();
	listarVetor();
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
