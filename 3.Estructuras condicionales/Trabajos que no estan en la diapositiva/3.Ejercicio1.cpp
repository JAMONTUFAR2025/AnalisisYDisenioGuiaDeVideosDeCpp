// Josue Alejandro Montufar Zuniga
// 202510050077
/* 1. Escriba un programa que lea dos numeros y determine cual de ellos es
el mayor. */

#include<iostream>

using namespace std;

int main()
{
	int n1, n2;
	
	cout<<"Digite 2 numeros: "<<endl;
	cin>>n1>>n2;
	
	if(n1 == n2)
	{
		cout<<"\nAmbos numeros son iguales."<<endl;
	}
	else if(n1 > n2)
	{
		cout<<"\nEl mayor es: "<<n1<<endl;
	}
	else
	{
		cout<<"\nEl mayor es: "<<n2<<endl;
	}
	
	return 0;
}