#include <iostream>
using namespace std;
int main() {

	double CalcularElsubtotal=0, total=0, imp=0, CalcularElDescuento=0, CalcularElImpuesto=0;
	int CalcularEldescuento=0;
	char EstaExenta;
	cout << "Ingrese el Subtotal de la Factura: ";
	cin >> CalcularElsubtotal;
	cout << "Ingrese el descuento (0, 10, 15, 20): ";
	cin >> CalcularEldescuento;
	cout<<"Factura Exenta? S o N"<<endl;
    cin>>EstaExenta;
	if(EstaExenta == 's' || EstaExenta == 'S') 
  	{
    	CalcularElDescuento= (CalcularElsubtotal*CalcularEldescuento)/ 100;
		total=CalcularElsubtotal;
  	}
	else 
		{
			CalcularElDescuento= (CalcularElsubtotal* CalcularEldescuento)/ 100;
			CalcularElImpuesto=(CalcularElsubtotal-CalcularElDescuento)* 0.15;
			total= CalcularElsubtotal-CalcularElDescuento + CalcularElImpuesto;
		}	
	cout<< "Total a pagar es: " << total<< endl;	
	return 0;
}

