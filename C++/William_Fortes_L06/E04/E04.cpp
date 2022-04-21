/*******************
William Fortes
2� Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h>

using namespace std;

//--------------------------------------------------------------
//vari�veis
//--------------------------------------------------------------
int n = 0;

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 06 - Exerc�cio: 04    \n";
	cout << "==============================\n";
}

Sortear()
{
	srand(time(NULL));//inicializa��o ramdom seed
	n = rand() %10 + 1;//numero aleat�rio at� 10 e iniciando em 1
}
//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	Cabec();
	
	Sortear();
	
	int num = 0;
	cout << "Digite um n� (1 - 10): ";
	cin >> num;
	
	cout << "\n\nO n� sorteado foi " << n;
	if (num == n)
		cout << "\nParabens voc� acertou !\n\n";
	else
		cout << "\nQue pena, voc� n�o acertou !\n\n";
	
	system("pause");
	
	return 0;
}
//--------------------------------------------------------------
