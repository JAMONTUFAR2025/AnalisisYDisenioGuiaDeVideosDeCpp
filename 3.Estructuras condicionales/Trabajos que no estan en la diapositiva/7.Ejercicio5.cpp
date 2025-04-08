// Josue Alejandro Montufar Zuniga
// 202510050077
/* 5. Escriba un programa que lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula o no. */

#include<iostream>

using namespace std;

int main()
{
	char letra;
	
	cout<<"Digite un caracter: ";
	cin>>letra;
	
	switch(letra)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"\nEs una vocal minuscula."<<endl; break;
		default : cout<<"\nNo es una vocal minuscula."<<endl; break;
	}
	
	return 0;	
}