#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std ;
int dado1 =0, dado2 =0, continuar =1;
int main ()
{
	while(continuar == 1)
	{
		cout<< "*****BIENVENIDO*****"<<endl;
		cout<<endl;
		srand(time(NULL));
		dado1=rand()% 6+1;
		dado2=rand()% 6+1;
		cout<< "\nDado1:-->" << dado1 <<endl;
		cout<< "\nDado2:-->" << dado2 <<endl;
		cout<<endl;
		cout<< "*Quiere volver a jugar otra ronda?*";
		cout<< "\n1---Volver a lanzar los dados"<<endl;
		cout<< "0---Salir del juego"<<endl;
		cout<< "Elija una Opcion->:";
		cin >> continuar;	
	}
	cout<<" Saliste del juego";
	return 0;
}







/*
{
	int numero =0;
	srand(time(NULL));
	
	numero= rand ()% 6 + 1 ;
	cout<< "\n Primero numero del dado1:"<< numero;
	
	numero= rand ()% 6 + 1 ;
	cout<< "\n Segundo numero del dado2:"<< numero;

	return 0 ;
		
}
*/
