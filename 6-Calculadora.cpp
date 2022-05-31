#include <iostream>



using namespace std;
int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int resultado = 0;
	
	cout<<"Ingrese el valor de a:";
	cin>> a;
	
	cout<< endl;
	
	cout<<"Ingrese el valor de b:";
	cin>> b;
	
	resultado = a + b; 
	cout<< endl;
	cout<<"La suma de a + b es: "<<resultado;
	 
	resultado = a - b; 
	cout<< endl;
	cout<<"La resta de a - b es: "<<resultado;
	
	resultado = a * b; 
	cout<< endl;
	cout<<"La multiplicacion de a * b es: "<<resultado;
	
	resultado = a / b; 
	cout<< endl;
	cout<<"La division de a / b es: "<<resultado;
	
	
	 return 0;
}

