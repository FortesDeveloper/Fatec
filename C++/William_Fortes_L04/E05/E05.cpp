/*******************
William Fortes
2� Sem. DSM
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
	cout << " Lista: 04 - Exerc�cio: 05    \n";
	cout << "==============================\n";
}

namespace DS
{
	enum {Domingo=1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int opc;
	
	//leitura
	system("cls");
	Cabec();
	
	cout << "Informe o n� do dia da semana(1-7): ";
	cin >> opc;
	
	switch(opc) 
	{
		case (DS::Domingo):
			{
				cout << "\nDomingo\n";
				break;
			}
		case (DS::Segunda):
			{
				cout << "\nSegunda\n";
				break;
			}
		case (DS::Terca):
			{
				cout << "\nTer�a\n";
				break;
			}
		case (DS::Quarta):
			{
				cout << "\nQuarta\n";
				break;
			}
		case (DS::Quinta):
			{
				cout << "\nQuinta\n";
				break;
			}
		case (DS::Sexta):
			{
				cout << "\nSexta\n";
				break;
			}
		case (DS::Sabado):
			{
				cout << "\nS�bado\n";
				break;
			}
		default:
			{
				cout << "\nOp��o inv�lida\n";
				break;
			}
	}
	
	cout << endl;
	system("pause");
	return 0;
}
