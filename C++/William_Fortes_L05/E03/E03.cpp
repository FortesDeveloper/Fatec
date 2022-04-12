/*******************
William Fortes
2� Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exerc�cio: 03    \n";
	cout << "==============================\n";
}

//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	Cabec();
	
	//c�digo fornecido
	int arr[5] = { 30, 20, 50, 70, 10 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;
	//--------------------
	
	cout << "//c�digo fornecido\n\n";
	cout << "Lin\n";
	cout << " 1|     int arr[5] = { 30, 20, 50, 70, 10 };\n";
	cout << " 2|     int *parr = &arr[4];\n";
	cout << " 3|     int inx = 0;\n";
	cout << " 4|     inx = *parr++;\n\n";
	
	cout << "-------------------\n";
	cout << "Perguntas:\n";
	cout << "-------------------\n";
	cout << "a) O c�digo compila ?" << endl;
	cout << "R.: SIM" << endl;
	cout << "b) Ap�s executar o c�digo, qual ser� o valor de inx ?" << endl;
	cout << "R.: " << inx << endl;
	cout << "c) Ap�s executar o c�digo, para onde parr estar� apontando ?" << endl;
	cout << "R.: Deveria ser para a linha 4 do vetor se a linha 4 do bloco n�o ocasionasse um 'erro de estouro', mesmo que impl�cito, tentando ler al�m do limite do vetor." << endl;
	
	//cout << parr   << " | " << *parr  << endl;
	
	cout << "\nVETOR\n";
	cout << "ENDERE�O | VALOR\n";
	for(int i = 0; i<5;i++)
	  cout << &arr[i] << " | "  << arr[i]<< endl;
	
	cout << "\nparr\n";
	cout << "ENDERE�O GUARDADO => " << parr << endl;
	cout << "VALOR NO ENDERE�O => " << *parr << endl;
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
