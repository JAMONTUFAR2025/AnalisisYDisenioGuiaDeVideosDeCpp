// Josue Alejandro Montufar Zuniga
// 202510050077
/* La sentencia switch

	switch(expresion)
	{
		case literal1:
			conjunto de instrucciones1;
			break;
		case literal2:
			conjunto de instrucciones2;
			break;
		case literaln:
			conjunto de instruccionesn;
			break;
		default:
			conjunto de instrucciones por defecto;
			break;
	}
*/

#include<iostream>

using namespace std;

int main()
{
	int numero;
	
	cout<<"Digite un numero entre 1-5: "; cin>>numero;
	
	switch(numero)
	{
		case 1: cout<<"\nEl numero es 1."<<endl; break;
		case 2: cout<<"\nEl numero es 2."<<endl; break;
		case 3: cout<<"\nEl numero es 3."<<endl; break;
		case 4: cout<<"\nEl numero es 4."<<endl; break;
		case 5: cout<<"\nEl numero es 5."<<endl; break;
		default: cout<<"\nNo es un numero del rango 1-5."<<endl; break;
	}
	
	return 0;
}