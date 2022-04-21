/*******************
William Fortes
2º Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <string.h>

using namespace std;

//--------------------------------------------------------------
//variáveis
//--------------------------------------------------------------
int regs = 0;

struct TAgenda
{
	char nome[50];
	char fone[20];
};
struct TAgenda *Agenda = NULL;

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 06 - Exercício: 05    \n";
	cout << "==============================\n";
}

Menu()
{
	cout << endl << endl;
	cout << "  ****************\n";
	cout << "     A G E N D A \n";
	cout << "  ****************\n";
	cout << "  1 - Adicionar\n";
	cout << "  2 - Consultar\n";
	cout << "  3 - Lista\n\n";
	cout << "  0 - Sair\n";
	cout << "  ****************\n";
	cout << "  Opção: ";
}

//----------------------------------------------- Funções para adicionar
Adicionar(TAgenda *a)
{
	system("cls");
	Cabec();
	
	cout << "\n";
	cout << "............................................\n";
	cout << "    Novo contato\n";
	cout << "............................................\n\n";
	
	char aux[100] = "";
	
	cout << "Informe o nome: ";
	cin.ignore();
	cin.getline(aux,100);
	strcpy(a[regs-1].nome ,aux);
	
	cout << "Informe o telefone: ";
	cin.ignore();
	cin.getline(aux,100);
	strcpy(a[regs-1].fone ,aux);
	
	cout << "\n\n";
	cout << "<<<  Contato adicionado na agenda.  >>>\n\n";
	
	system("pause");
}
//-------------------------------------------------Funções para localizar
int Localizar(string *p, TAgenda *a)
{
	int posicao = -1;
	
	for (int i=0; i<regs; i++)
	{
		if (*p == a[i].nome)
		{
			posicao = i;
			break;
		}
	}
	
	return posicao;
}
Consultar(TAgenda *a)
{
	system("cls");
	Cabec();
	
	char aux[100];
	string pesq;
	
	cout << "Digite o nome a pesquisar: ";
	cin.ignore();
	cin.getline(aux,100);
	pesq = aux;
	
	int posi = Localizar(&pesq, a);//passa o nome a localizar e a agenda e guarda o retorno
	if (posi >= 0)
	{
		cout << "\n\n";
		cout << "------------------------------------------\n";
		cout << "  Nome localizado.\n";
		cout << "------------------------------------------\n";
		cout << "["<<posi<<"]";
		cout << " NOME: " << a[posi].nome << endl;
		cout << "    FONE: " << a[posi].fone << endl << endl;
	}
	else
	{
		cout << "\n\n";
		cout << "------------------------------------------\n";
		cout << "  Nome não localizado na agenda.\n";
		cout << "------------------------------------------\n\n\n";
	}
	
	system("pause");
}
//-------------------------------------------------Funções para listar
Listar(TAgenda *a)
{
	system("cls");
	Cabec();
	
	cout << "\n";
	cout << "............................................\n";
	cout << "    Listagem pela inicial do nome\n";
	cout << "............................................\n\n";

	char letra[1];
	cout << "    * => para todos\n";
	cout << "Informe a letra inicial: ";
	cin >> letra[0];
	
	if (letra[0] == '*')
	{
		cout << "\n\nListagem completa\n";
		cout << "---------------------\n";
		for (int i =0; i < regs; i++)
		{
			cout << "["<<i<<"]";
			cout << " nome: " << a[i].nome << endl;
			cout << "    fone: " << a[i].fone << endl << endl;
		}
	}
	else
	{
		cout << "\n\nListagem de nomes inicados com a letra [ " << letra[0] << " ]\n";
		cout << "----------------------------------------------\n";
		for (int i =0; i < regs; i++)
		{
			if (a[i].nome[0] == letra[0])
			{
				cout << "["<<i<<"]";
				cout << " NOME: " << a[i].nome << endl;
				cout << "    FONE: " << a[i].fone << endl << endl;
			}
		}

	}

	system("pause");
}
//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	char opc[1];
	
	do
	{
		opc[0] = ' ';//limpa variavel
		
		system("cls");
		Cabec();
		Menu();
		cin >> opc[0];
		
		switch(opc[0])
		{
			case '1': {regs += 1;//adiciona um ao contador d eregistros
    				Agenda = (TAgenda*)realloc(Agenda, regs * sizeof(TAgenda));//aloca + 1 espaço (Expande)

					Adicionar(Agenda);
					break;
					}
			case '2': {
					Consultar(Agenda);
					break;
					}
			case '3': {
					Listar(Agenda);
					break;
					}
			case '0': break;
		default:
			cout << "\nOpção inválida\n\n\n";
			system("pause");
			break;
		}
		
		cout << endl << endl;
	} while (opc[0] != '0');
	
	free(Agenda);
	return 0;
}
//--------------------------------------------------------------
