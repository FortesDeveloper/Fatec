#include <iostream>
#include <locale>
using namespace std;

/*A partir desse vetor int v[] = {10, 80, 5, -10, 45, -20, 100, 200, 10} faça um programa que
    tenha uma função para achar os valores máx e min desse vetor. Os parâmetros dessa função são
    o vetor, o tamanho dele, um ponteiro para o máx e ponteiro para o min, ou seja, os parâmetros
    de max e min devem ser passados por referência e não por valor para a função.
    Então, exibir os valores de máx e min do vetor.*/

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
	
	cout << "valor máximo = "<< max <<endl;
	cout << "valor mínimo = "<< min <<endl;
	
	system("pause");
	return 0;
}
