// Josue Alejandro Montufar Zuniga
// 202510050077
/* 3. Realice un programa que lea un valor entero y determine si se trata de un
numero par o impar. */

#include<iostream>

using namespace std;

int main()
{
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero == 0)
	{
		cout<<"\nEl numero es cero."<<endl;
	}
	else if(numero % 2 == 0)
	{
		cout<<"\nEl numero es par."<<endl;
	}
	else
	{
		cout<<"\nEl numero es impar."<<endl;
	}
	
	return 0;
}