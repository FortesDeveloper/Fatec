/*******************
William Fortes
2� Sem. DSM
03/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 03 - Exerc�cio: 10    \n";
	cout << "==============================\n";
}

int posi = 0;

int busca(int pvetor[10], int pnum)
{
	int ret = 0;
	
	for (int i = 0; i < 10; i++)
		if (pvetor[i] == pnum)
		{
			posi = i;//posi��o em que se encontra o valor
			ret = 1;
			break;
		}
	
	return ret;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int vetor[10] = {10,20,30,40,50,60,70,80,90,0};
	int num;
	
	system("cls");
	Cabec();
	
	for (int i = 0; i < 10; i++)
		cout << vetor[i] << "  ";
	
	cout << "\nInforme o n� a ser localizado no vetor acima: ";
	cin >> num;
	
	if (busca(vetor, num) == 1)
		cout << endl << vetor[posi] << endl;
	else
		cout << "\nValor n�o encontrado" << endl;
	
	system("pause");
	return 0;
}
