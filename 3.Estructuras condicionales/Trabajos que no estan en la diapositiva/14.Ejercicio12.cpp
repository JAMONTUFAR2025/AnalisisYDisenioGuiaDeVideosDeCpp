// Josue Alejandro Montufar Zuniga
// 202510050077
/* 12. Hacer un menu que considere las siguientes opciones:
	Caso 1: Cubo de un numero
	Caso 2: Numero par o impar
	Caso 3: Salir
*/

#include<iostream>

using namespace std;

int main()
{
	int opc, numero, cubo = 0;
	
	cout<<"\tEjercicio 12"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: ";
	cin>>opc;
	
	switch(opc)
	{
		case 1:
			cout<<"Digite un numero: "; cin>>numero;
			cubo = numero * numero * numero;
			cout<<"\nEl resultado del cubo es: "<<cubo<<endl;
		break;
		case 2:
			cout<<"Digite un numero: "; cin>>numero;
			
			if(numero % 2 == 0)
			{
				cout<<"\nEl numero es par."<<endl;
			}
			else
			{
				cout<<"\nEl numero es impar."<<endl;
			}
		break;
		case 3:
			cout<<"Has salido."<<endl;
		break;
		default:
			cout<<"Opcion no valida, has salido."<<endl;
		break;
	}
	
	return 0;
}