#include <iostream>
using namespace std;

string nombreCompleto(string nombre, string apellido)
{
return nombre + " " + apellido;
}

int main(int argc, char** argv) 
{
	string primerNombre = "";
	string primerApellido = "";
	
	cout<<"Ingrese su primer Nombre: ";
	cin>>primerNombre;
	cout<<"Ingrese su primer Apellido: ";
	cin>>primerApellido;
	cout<<endl;
	cout << "Nombre Completo: "
	<< nombreCompleto(primerNombre, primerApellido);

    return 0;
}
