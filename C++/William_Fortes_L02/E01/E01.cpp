/*******************
William Fortes
2º Sem. DSM
02/2022
*******************/
#include <iostream>

using namespace std;

Cabec()
{
	
	cout << "==============================\n";
	cout << " William Fortes - 2022        \n";
	cout << " Lista: 02 - Exercício: 01    \n";
	cout << "==============================\n\n";
}

int main(int argc, char** argv) 
{
	int i;
	int ult = 14;
	
    system("cls");
    Cabec();
	cout << "**************************\n";
    
    do
    {
    	cout << i;
    	if (i < ult-1)
    	  cout << ",";
    	
		i = i + 2;
	} while (i <= ult);
	
	cout << "\n**************************\n";
	
	system("pause");
	return 0;
}
