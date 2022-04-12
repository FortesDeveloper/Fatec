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
int mat[3][3];
//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exercício: 08    \n";
	cout << "==============================\n";
}

carga()
{
	int n;
	int *pi;
	
	for (int i= 0; i < tam; i++)
	{
		system("cls");
		Cabec();
		
		cout << "Informe o "<<i+1<<"º nº: ";
		cin >> n;
		
		pi = &n;
		num[i] = *pi;
	}
}

ordenar()
{
	int temp;
	
    for(int i=0; i<(tam-1); i++)
    {
    	for (int j=0; j<(tam-i-1); j++)
    	{
        	if (num[j] > num[j+1])
            {
            	temp = num[j];
            	num[j] = num[j+1];
            	num[j+1] = temp;
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

matriz()
{
	int ctrl = 0;
	
    for(int i=0; i < 3; i++)
    	for (int j=0; j < 3; j++)
    	{    		
    		mat[i][j] = num[ctrl];
    		ctrl++;
		}
}

listarMatriz()
{
	int *ptr;
	
	//system("cls");
	//Cabec();
	cout << "\n\nNúmeros ordenados [Matriz]\n";
    for(int i=0; i < 3; i++)
    {
    	for (int j=0; j < 3; j++)
		{
			ptr = &mat[i][j];
			cout << *ptr << ", ";
		}
		cout << endl;
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
	
	matriz();
	listarVetor();
	listarMatriz();
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
