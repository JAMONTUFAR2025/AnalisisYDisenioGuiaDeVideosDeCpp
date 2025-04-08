// Josue Alejandro Montufar Zuniga
// 202510050077
/* 10. Mostrar los meses del anio, pidiendole al usuario un numero entre
(1-12), y mostrar el mes al que corresponde. */

#include<iostream>

using namespace std;

int main()
{
	int mes;
	
	cout<<"Digite un numero para mostrar un mes del anio (1-12): ";
	cin>>mes;
	
	switch(mes)
	{
		case 1: cout<<"\nEnero."<<endl; break;
		case 2: cout<<"\nFebrero."<<endl; break;
		case 3: cout<<"\nMarzo."<<endl; break;
		case 4: cout<<"\nAbril."<<endl; break;
		case 5: cout<<"\nMayo."<<endl; break;
		case 6: cout<<"\nJunio."<<endl; break;
		case 7: cout<<"\nJulio."<<endl; break;
		case 8: cout<<"\nAgosto."<<endl; break;
		case 9: cout<<"\nSeptiembre."<<endl; break;
		case 10: cout<<"\nOctubre."<<endl; break;
		case 11: cout<<"\nNoviembre."<<endl; break;
		case 12: cout<<"\nDiciembre."<<endl; break;
		default: cout<<"\nValor incorrecto."<<endl; break;
	}
	
	return 0;
}