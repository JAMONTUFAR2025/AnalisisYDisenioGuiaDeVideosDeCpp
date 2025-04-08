// Josue Alejandro Montufar Zuniga
// 202510050077
/* 2. Escriba un programa que lea tres numeros y determine cual de ellos es
el mayor. */

#include<iostream>

using namespace std;

int main()
{
	int n1, n2, n3;
	
	cout<<"Digite 3 numeros: "<<endl;
	cin>>n1>>n2>>n3;
	
	if(n1 == n2 && n1 == n3)
	{
		cout<<"\nLos tres numeros son iguales."<<endl;
	}
	else if(n1 == n2 && n1 > n3)
	{
		cout<<"\nLos numeros "<<n1<<" y "<<n2<<" son iguales y los mayores."<<endl;
	}
	else if(n1 == n3 && n1 > n2)
	{
		cout<<"\nLos numeros "<<n1<<" y "<<n3<<" son iguales y los mayores."<<endl;
	}
	else if(n2 == n3 && n2 > n1)
	{
		cout<<"\nLos numeros "<<n2<<" y "<<n3<<" son iguales y los mayores."<<endl;
	}
	else if(n1 > n2 && n1 > n3)
	{
		cout<<"El mayor es: "<<n1<<endl;
	}
	else if(n2 > n1 && n2 > n3)
	{
		cout<<"El mayor es: "<<n2<<endl;
	}
	else
	{
		cout<<"El mayor es: "<<n3<<endl;
	}
	
	return 0;
}