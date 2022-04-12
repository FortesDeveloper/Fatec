/*******************
William Fortes
2º Sem. DSM
03/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 04 - Exercício: 06    \n";
	cout << "==============================\n";
}

Menu()
{
	cout << endl << endl;
	cout << "***************************\n";
	cout << "          MENU\n";
	cout << "***************************\n";
	cout << "1 -> Saque\n";
	cout << "2 -> Extrato\n";
	cout << "3 -> Transferência\n";
	cout << "4 -> Depósito\n";
	cout << "***************************\n";
	cout << "OPÇÃO: ";
}

namespace BK
{
	enum {Saque=1, Extrato, Transf, Deposito};
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int opc;
	
	//leitura
	system("cls");
	Cabec();
	Menu();
	cin >> opc;
	
	switch(opc) 
	{
		case (BK::Saque):
			{
				cout << "\nSelecionou Saque\n";
				break;
			}
		case (BK::Extrato):
			{
				cout << "\nSelecionou Extrato\n";
				break;
			}
		case (BK::Transf):
			{
				cout << "\nSelecionou Transferência\n";
				break;
			}
		case (BK::Deposito):
			{
				cout << "\nSelecionou Depósito\n";
				break;
			}
		default:
			{
				cout << "\nOpção inválida\n";
				break;
			}
	}
	
	cout << endl;
	system("pause");
	return 0;
}
