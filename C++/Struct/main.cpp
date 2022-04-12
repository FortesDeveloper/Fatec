#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	struct TFuncionario
	{
		int   cod;
		char  nome[50];
		float salario;
		char  depto[20];
		char  cargo[20];
	};
	
	struct TFuncionario func[4];
	
	for (int i =0; i < 4; i++)
	{
		system("cls");
		cout << "Funcionário [" <<i <<"]\n\n";
		cout << "Informe o codigo: ";
		cin >> func[i].cod;
		cout << "\nInforme o nome: ";
		cin >> func[i].nome;
		cout << "\nInforme o salário: ";
		cin >> func[i].salario;
		cout << "\nInforme o depto: ";
		cin >> func[i].depto;
		cout << "\nInforme o cargo: ";
		cin >> func[i].cargo;
	}
	
	system("pause");
	return 0;
}
