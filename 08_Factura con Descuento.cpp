#include <iostream>
using namespace std;
int main()
{
	//Datos de entrada
	double subtotal = 0, total = 0; 
	double impuesto = 0.15;
	int descuento = 0;
	double calculoDescuento = 0; 
	double calculoImpuesto = 0;
	
	cout<<"Ingrese el subtotal de la factura: ";
	cin>>subtotal;
	cout<<"Ingrese el descuento ( 0, 10, 15, 20)";
	cin>>descuento;
	
	//proceso
	calculoDescuento = (subtotal * descuento) / 100;
	calculoImpuesto = ( subtotal - calculoDescuento) * impuesto;
	total = subtotal - calculoDescuento + calculoImpuesto;
	
	//salida
	
	cout<<"\nTotal a pagar es: "<<total;
	
	return 0;
}

