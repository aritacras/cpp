#include <iostream>
using namespace std;
extern void agregarProducto(string descripcion, int cantida, double precio);

void productos(int opcion)
{
	system("cls");
	
int opcionProducto = 0;

	switch(opcion)
{
case 1:
{
	cout<<"BEBIDAS CALIENTES "<<endl;
	cout<<"******************"<<endl;
	cout<<"1. Capuccino"<<endl;
	cout<<"2. Expreso"<<endl;
	cout<<" Ingrese una opci�n: ";
	cin>>opcionProducto;
	
	switch(opcionProducto)
{
case 1:
	agregarProducto("Capuccino L.40.00", 1, 40);
	break;
case 2:
	agregarProducto("Expresso L-30.00", 1, 30);
	break;
	default:
{
	cout<<"opcion no valida";
	return;
	break;
}	
	}
	cout<<endl;
	cout<<"Producto agregado"<<endl<<endl;
	system("pause");
	break;
}
case 2:
{	
	cout<<"BEBIDAS FRIAS"<<endl;
	cout<<"*************"<<endl;
	system("pause");
	break;
}
case 3:
{	
	cout<<"REPOSTERIA"<<endl;
	cout<<"**********"<<endl;
	system("pause");
	break;
}
default:
	break;
}
		
}
