#include <iostream>
#include <locale>
using namespace std;

/*A partir desse vetor int v[] = {10, 80, 5, -10, 45, -20, 100, 200, 10} fa�a um programa que
    tenha uma fun��o para achar os valores m�x e min desse vetor. Os par�metros dessa fun��o s�o
    o vetor, o tamanho dele, um ponteiro para o m�x e ponteiro para o min, ou seja, os par�metros
    de max e min devem ser passados por refer�ncia e n�o por valor para a fun��o.
    Ent�o, exibir os valores de m�x e min do vetor.*/

maxmin(int pv[], int *size, int *pmin, int *pmax)
{
	//cout << *size << endl;
	for (int i = 0; i < *size; i++)
	{
		if (pv[i] < *pmin)
			*pmin = pv[i];
		
		if (pv[i] > *pmax)
			*pmax = pv[i];
	}
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int v[] = {10, 80, 5, -10, 45, -20, 100, 200, 10};
	int tam = sizeof(v) / sizeof(v[0]);
	int max = 0;
	int min = 99999999999;
	
	maxmin(v, &tam, &min, &max);
	
	cout << "valor m�ximo = "<< max <<endl;
	cout << "valor m�nimo = "<< min <<endl;
	
	system("pause");
	return 0;
}
