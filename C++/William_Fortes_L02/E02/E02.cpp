/*******************
William Fortes
2� Sem. DSM
02/2022
*******************/
#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

Cabec()
{
	
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 02 - Exerc�cio: 02    \n";
	cout << "==============================\n\n";
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	int nums[10] = {2,8,9,4,6,7,1,3,0,99};
	int n;
	int p = -1;
	
	system("cls");
	Cabec();
	cout << "VETOR\n";
	
	for (int i = 0; i < 10; i++) 
		cout << "[" << i+1 << "]=" << nums[i] << " | ";
		
	cout << "\n\nInforme um n�mero: ";
	cin >> n;
	
    for (int i = 0; i < 10; i++)
    {
    	if (nums[i] == n)
    	  p = i;
	}
	
	if (p >= 0)
		cout << "\nO n� digitado est� na posi��o " << p+1 << endl;
	else
		cout << "\nO n� digitado n�o foi encontrado no VETOR \n";
	
	system("pause");
	return 0;
}
