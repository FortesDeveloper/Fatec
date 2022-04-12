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
	cout << " Lista: 04 - Exercício: 07    \n";
	cout << "==============================\n";
}


bool EhTriangulo(int a, int b, int c)
{
	if ((a + b < c) or
	    (a + c < b) or
	    (b + c < a))
		return false;
	else
		return true;
}

void triangulo(int tp)
{
	if (tp == 1)
	{
		cout << endl;
		cout << "Triângulo Equilátero => todos os lados são iguais.\n\n";
	}
	else if (tp == 2)
	{
		cout << endl;
		cout << "Triângulo Isósceles => 2 lados iguais e 1 diferente.\n\n";
	}
	else if (tp == 3)
	{
		cout << endl;
		cout << "Triângulo Escaleno => todos os lados são diferentes.\n\n";
	}
}

Classificar(int a, int b, int c)
{
	int tp;//1 => Equilátero
	       //2 => Isósceles
	       //3 => Escaleno
	
	if ((a == b) and (b == c))
		tp = 1;
	else if ( 
	          ((a == b) and (b != c)) or
	          ((a == c) and (b != c)) or
	          ((b == c) and (a != b)) 
	        )
		tp = 2;
	else if ((a != b) and (b != c))
		tp = 3;
	
	triangulo(tp);
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	system("cls");
	Cabec();
	
	cout << "\n\n";
	cout << "**************************************************\n";
	cout << "Construindo e classificando triângulos\n";
	cout << "**************************************************\n";
	cout << "Informe o lado A: ";
	cin >> a;
	cout << "Informe o lado B: ";
	cin >> b;
	cout << "Informe o lado C: ";
	cin >> c;
	
	if (EhTriangulo(a, b, c)) 
	{
		cout << "\nÉ um triângulo.\n\n";
		Classificar(a, b, c);
	}
	else
		cout << "\nDesculpe ! \nCom esses valores não é possível formar um triângulo.\n\n";
	
	system("pause");
	return 0;
}
