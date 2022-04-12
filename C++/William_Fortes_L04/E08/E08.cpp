/*******************
William Fortes
2º Sem. DSM
03/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>

using namespace std;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 04 - Exercício: 08    \n";
	cout << "==============================\n";
}

bool Validar(float a, float b, float c)
{
	if ((a == 0) or
	    (b == 0) or
	    (c == 0))
		return false;
	else
		return true;
}

Bhascara(float a, float b, float c)
{
	float delta, x1, x2;
	
	//delta = b^2 - (4.a.b)
	delta = pow(b,2) - (4 * a * c);
	
	//X = -b +- Raiz(Delta)
	//    _________________
	//        2.a
	x1 = (-b + sqrt(delta) ) / (2 * a);
	x2 = (-b - sqrt(delta) ) / (2 * a);
	
	cout << endl;
	//cout << "Delta = " << delta <<endl;
	cout << "X1 = " << x1 <<endl;
	cout << "X2 = " << x2 <<endl;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	
	system("cls");
	Cabec();
	
	cout << "\n\n";
	cout << "**************************************************\n";
	cout << "Bháskara\n";
	cout << "**************************************************\n";
	cout << "Informe o valor A: ";
	cin >> a;
	cout << "Informe o valor B: ";
	cin >> b;
	cout << "Informe o valor C: ";
	cin >> c;
	
	if (Validar(a, b, c))
		Bhascara(a, b, c);
	else
		cout << "\n\nValores inválidos. \nNenhum valor pode ser zero.\n\n";
	
	system("pause");
	return 0;
}
