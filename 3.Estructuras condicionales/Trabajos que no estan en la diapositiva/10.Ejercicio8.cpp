// Josue Alejandro Montufar Zuniga
// 202510050077
/* 8. Escribe un programa que lea de la entrada estandar tres numeros. Despues
debe leer un cuarto numero e indicar si el numero coincide con alguno de los
introducidos con anterioridad. */

#include<iostream>

using namespace std;

int main()
{
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	
	cout<<"Digite tres numeros enteros: "<<endl;
	cin>>n1>>n2>>n3;
	
	cout<<"\nDigite un cuarto numero entero: "<<endl;
	cin>>n4;
	
	if(n4 == n1)
	{
		cout<<"\nEl cuarto numero coincide con el primer numero ingresado: "<<n1<<endl;
	}
	else if(n4 == n2)
	{
		cout<<"\nEl cuarto numero coincide con el segundo numero ingresado: "<<n2<<endl;
	}
	else if(n4 == n3)
	{
		cout<<"\nEl cuarto numero coincide con el tercer numero ingresado: "<<n3<<endl;
	}
	else
	{
		cout<<"\nEl cuarto numero no coincide con los numeros ingresados anteriormente."<<endl;
	}
	
	return 0;
}