/*******************
William Fortes
2º Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>
#include <string.h>

using namespace std;

//--------------------------------------------------------------
//variáveis
//--------------------------------------------------------------
int tam = 5;

int notas[5];

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 06 - Exercício: 03    \n";
	cout << "==============================\n";
}

Menu()
{
	cout << "  ****************\n";
	cout << "      M E N U \n";
	cout << "  ****************\n";
	cout << "  1 - Código (A)\n";
	cout << "  2 - Código (B)\n";
	cout << "  3 - Código (C)\n";
	cout << "  4 - Código (D)\n\n";
	cout << "  0 - Sair\n";
	cout << "  ****************\n";
	cout << "  Opção: ";
}

P3a()
{
	system("cls");
	Cabec();
	
	int a,b,*c;
	a = 3;
	b = 4;
	c = &a;
	b++;
	*c = a+2;
	cout << a << b;
}

P3b()
{
	system("cls");
	Cabec();
	
	int a, b, *c;
	a = 4;
	b = 3;
	c = &a;
	*c = *c +1;
	c = &b;
	b = b + 4;
	cout << a << b << *c;
}

P3c()
{
	system("cls");
	Cabec();
	
	int a, b, *c, *d, *f;
	a = 4;
	b = 3;
	c = &a;
	d = &b;
	*c /= 2;
	f = c;
	c = d;
	d = f;
	cout << *c << *d;
}

int calcula(int x)  //função dada no código (D)
{
	int i;
	if ((x = x * 2) > 5) 
	  return(x + 3);
	
	for(i = 0; i < 10; i++)
	{
	  if (i < 5) 
	    continue;
	  if (x > 8) 
	    break;
	  
	  x += 2;
	}
	
	return(x);
}
P3d()
{
	system("cls");
	Cabec();
	
	int a, b, c;
	char d;
	
	a = 1;
	b = 2;
	c = 3;
	d = 'A';
	
	a += b * c;
	d = (a > 7)?d-1:d+1;
	b = calcula(b);
	c = calcula(calcula(a));
	a = c++;
	cout << a << b << c << d;
}

//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int opc = -1;
	
	do
	{
		system("cls");
		Cabec();
		Menu();
		cin >> opc;
		
		switch(opc)
		{
			case 1: P3a();
					break;
			case 2: P3b();
					break;
			case 3: P3c();
					break;
			case 4: P3d();
					break;
			case 0: break;
		default:
			cout << "\nOpção inválida";
			break;
		}
		
		cout << endl << endl;
		system("pause");
	} while (opc != 0);
	
	return 0;
}
//--------------------------------------------------------------
