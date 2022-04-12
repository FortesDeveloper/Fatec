/*******************
William Fortes
2∫ Sem. DSM
03/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cstring>

using namespace std;

Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 03 - ExercÌcio: 07    \n";
	cout << "==============================\n";
}

int tipochr(char x)
{
	x = toupper(x);
	
	if ((x == 'A') || (x == 'E') || (x == 'I') || (x == 'O') || (x == 'U') )
	  return 1;
	else
	  return 0;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	char c(1);
	string aux;
	
	system("cls");
	Cabec();
	
	cout << "Informe um caracter: ";
	cin >> c;
	
	if (tipochr( c ) == 1)
		aux = "\n… vogal";
	else
    	aux = "\nN„o È vogal";
    
    cout << aux << endl << endl;
    
	system("pause");
	return 0;
}
