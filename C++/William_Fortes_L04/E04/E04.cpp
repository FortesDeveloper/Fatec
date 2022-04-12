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
	cout << " Lista: 04 - Exercício: 04    \n";
	cout << "==============================\n";
}

Menu()
{
	cout << endl << endl;
	cout << "***************************\n";
	cout << "          MENU\n";
	cout << "***************************\n";
	cout << "A -> Entrada\n";
	cout << "B -> Prato principal\n";
	cout << "C -> Sobremesa\n\n";
	cout << "Q -> Sair\n";
	cout << "***************************\n";
	cout << "OPÇÃO: ";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	char opc;
	
	//leitura
	do
	{
		system("cls");
		Cabec();
		Menu();
		cin >> opc;
		opc = toupper(opc);
		
		switch(opc) 
		{
			case 'A':
				{
					cout << "\nBrusqueta\n\n";
					system("pause");
					break;
				}
			case 'B':
				{
					cout << "\nLasanha a bolonhesa\n\n";
					system("pause");
					break;
				}
			case 'C':
				{
					cout << "\nPetit Gateau\n\n";
					system("pause");
					break;
				}
			case 'Q': break;
			default:
				{
					cout << "\nOpção inválida\n\n";
					system("pause");
					break;
				}
		}
	} while (opc != 'Q');
	
	cout << endl;
	system("pause");
	return 0;
}
