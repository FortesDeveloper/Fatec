/*******************
William Fortes
2º Sem. DSM
04/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;

//--------------------------------------------------------------
//funcoes
//--------------------------------------------------------------
Cabec()
{
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 05 - Exercício: 05    \n";
	cout << "==============================\n";
}

//--------------------------------------------------------------
//Principal => MAIN
//--------------------------------------------------------------
int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	Cabec();
	
	cout << "//código fornecido\n\n";
	cout << "Lin\n";
	
	cout << " 1|     int count = 10, *temp, sum = 0;\n";
	cout << " 2|     temp = &count;\n";
	cout << " 3|     *temp = 20;\n";
	cout << " 4|     temp = &sum;\n";
	cout << " 5|     *temp = count;\n";
	cout << " 6|     cout << “ count = ”count << “*temp = ” *temp << “sum = ” sum;\n\n\n";
	
	int count = 10, *temp, sum = 0;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	cout << " count = " << count << " *temp = " << *temp << " sum = " << sum;
	
	cout << "\n\ncount tem o valor de 20\nO valor de temp é 20 por que aponta para sum\nsum tem o valor de 20 copiado através do ponteiro.\n\n";
	
	cout << endl;
	system("pause");
	return 0;
}
//--------------------------------------------------------------
