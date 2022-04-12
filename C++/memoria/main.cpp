#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int tam;
	
	cout << "Informe o tamanho do vetor: ";
	cin >> tam;
	
	char* nome1 = "Luis";
char* nome2 = "Fernando";
char* nome3 = "Vitoria";
char* nome4 = "Leticia";
	
	struct TPessoa
	{
		char  nome[50]; 
		char  sexo[1]; 
		int   *idade;
	};
	
	TPessoa *p1=NULL, *p2=NULL, *p3=NULL;
	
	p1 = (TPessoa*)malloc(tam * sizeof(TPessoa));
	p2 = (TPessoa*)calloc(tam, sizeof(TPessoa));
	p3 = (TPessoa*)realloc(p3, tam * sizeof(TPessoa));
	
	for (int i=0;i<tam;i++)
	{
		cout << "\nInforme o nome: ";
		cin >> p1[i].nome;
		
		cout << "\nInforme o sexo: ";
		cin >> *p1[i].sexo;
		
		p1[i].idade = (int*)malloc(1 * sizeof(int));
		
		cout << "\nInforme a idade: ";
		cin >> *p1[i].nome;
	}
	free(p1);
	free(p2);
	free(p3);
/*	if (p1 == NULL) 
	{
		cout << "Erro: Memoria insuficiente!" << endl;
		return 0;
	}
	else 
	{
		int i;
		for (i=0; i<tam; i++) 
		{
			cout << p[i] << endl;
		}
	}
	
	cout << endl << endl << endl << endl;
	
	int *vet = NULL;
	float *m;
	vet = (int*) calloc(tam, sizeof(int));
	
	cout << endl << "Usando CALLOC: " << endl;
	if (vet == NULL) 
	{
		cout << "Erro: Memoria insuficiente!" << endl;
		return 0;
	}
	else
	{
		int i;
		for(i=0; i<tam;i++)
			cout << vet[i] << endl;
	}
	
	
	cout << endl << endl << endl << endl;
	
	int *vet2, *vet3;
	vet2 = (int *)realloc(vet, 20 * sizeof(int));
	cout << endl << "Usando REALLOC: " << endl;
	cout << "Dobrando o tamanho do vetor" << endl;
	if (vet == NULL) 
	{
		cout << "Erro: Memoria insuficiente!" << endl;
		return 0;
	}
	else 
	{
		int i;
		for (i=0; i<20; i++) 
		{
			cout << "Valor na posicao " << i << " é " << vet2[i] << endl;
		}		
	}
	
	
	cout << endl << "Vetor original: " << endl;
	int i;
	for (i=0; i<10; i++) 
	{
		cout << "Valor na posicao " << i <<  " é " << vet[i] << endl;
	}
	
	free(p);
	free(vet);
	free(vet2);*/
	
}

