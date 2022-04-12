/*******************
William Fortes
2� Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>
#include <string.h>

using namespace std;

//--------------------------------------------------------------
//vari�veis
//--------------------------------------------------------------
int tam = 100;
char frase1[100] = "", 
     frase2[100] = "",
     frase3[100] = "";

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exerc�cio: 09    \n";
	cout << "==============================\n";
}

carga()
{
	system("cls");
	Cabec();
		
	cout << "Informe a 1� frase: ";
	cin.getline(frase1,100);

	cout << "\nInforme a 2� frase: ";
	cin.getline(frase2,100);
}

int tamanhoA(char fr[100])
{
	char *ptr;
	int count = 0;
	
	for (int i = 0; i < tam; i++)
	{
		ptr = &fr[i];
		
		if ( (*ptr != ' ') and (*ptr != NULL) )
		  count++;
	}
	
	return count;
}

int tamanhoB(char fr[100])
{
	int count = 0;
	count = strlen(fr);
	return count;
}

int copycompare(char fO[100], char fD[100])
{
	//copia
	strcpy(fD, fO);
	
	//checa tamanho
	int x = strcmp(fO, fD);
	
	if (x < 0)	
		//cout << "frase Origem menor que frase Destino";
		return tamanhoA(fD);
	else if (x == 0)
		//cout << "As frase Origem e Destino s�o iguais";
		return tamanhoA(fO);
    else if (x > 0)
		//cout << "frase Origem maior que frase Destino";
		return tamanhoA(fO);
}
//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	carga();
	
	cout << "\n------------------------------------------------------------------\n";
	cout << "Com fun��o que varre arrei(considerando o espa�o como letra)\n";
	cout << "A 1� frase cont�m "<<tamanhoA(frase1)<<" letras";
	cout << "\n\nCom fun��o strlen\n";
	cout << "A 2� frase cont�m "<<tamanhoA(frase2)<<" letras\n\n";
	
	cout << "A maior frase (frase2 <-> frase3(c�pia)) cont�m "<<
	        copycompare(frase2, frase3)
	        <<" letras\n\n";
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
