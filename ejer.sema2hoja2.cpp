#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

	float num;
	float resultado;

	cout << "ingrese el numero: ";cin>>num;
	

	resultado = (num >= 10) ? 3 * num : num/4;

	cout << "el resutado es:  "<<resultado;
	
	_getch();
	
	
}
