/*******************
William Fortes
2º Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <time.h>

using namespace std;

//--------------------------------------------------------------
//variáveis
//--------------------------------------------------------------
int n = 0;

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 06 - Exercício: 04    \n";
	cout << "==============================\n";
}

Sortear()
{
	srand(time(NULL));//inicialização ramdom seed
	n = rand() %10 + 1;//numero aleatório até 10 e iniciando em 1
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
	cout << "Digite um nº (1 - 10): ";
	cin >> num;
	
	cout << "\n\nO nº sorteado foi " << n;
	if (num == n)
		cout << "\nParabens você acertou !\n\n";
	else
		cout << "\nQue pena, você não acertou !\n\n";
	
	system("pause");
	
	return 0;
}
//--------------------------------------------------------------
