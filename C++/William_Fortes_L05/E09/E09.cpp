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
	cout << " Lista: 05 - Exercício: 09    \n";
	cout << "==============================\n";
}

carga()
{
	system("cls");
	Cabec();
		
	cout << "Informe a 1ª frase: ";
	cin.getline(frase1,100);

	cout << "\nInforme a 2ª frase: ";
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
		//cout << "As frase Origem e Destino são iguais";
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
	cout << "Com função que varre arrei(considerando o espaço como letra)\n";
	cout << "A 1ª frase contém "<<tamanhoA(frase1)<<" letras";
	cout << "\n\nCom função strlen\n";
	cout << "A 2ª frase contém "<<tamanhoA(frase2)<<" letras\n\n";
	
	cout << "A maior frase (frase2 <-> frase3(cópia)) contém "<<
	        copycompare(frase2, frase3)
	        <<" letras\n\n";
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
