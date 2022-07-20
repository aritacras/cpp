#include <iostream>
#include <math.h>

using namespace std;

double raiz(double num1) 
{
	return sqrt(num1);
}
int main()
{
	
	double numero = 0;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
		cout<<"La raiz de "<<numero<<" es: "<<raiz(numero);

	return 0;
}



