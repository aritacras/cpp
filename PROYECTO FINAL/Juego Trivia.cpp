#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;
using namespace std ;

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

int main ()
{
	setlocale(LC_ALL,"");
	
	int Opcion=0 ; 
	int Salir;
	char respuesta;
	char nombre[20];
	int total;
	int buenas = 0, malas = 0;
	int total_buenas = 0,  total_malas = 0;
	int puntaje = 0;

	
	
	system("COLOR B4");
	
	gotoxy(45,1);cout<<"Ingrese su Nombre de Jugador";
	gotoxy(55,3);cin>> nombre;
	cout<<"------------------------------------------------------------------------------------------------------------------------";
	gotoxy(45,6);cout<<"Bienvenido a Preguntados"<<" "<<nombre<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------";
	
	for (int i=0; i<6; i++)
	{
		for (int i=0; i < 6; i++)
		
		{
			gotoxy(50,9);cout<<"Menu de Preguntados"<<endl;
		
			gotoxy(45,11);cout<<"1- Geografia "<<endl;
			gotoxy(45,12);cout<<"2- Arte "<<endl;
			gotoxy(45,13);cout<<"3- Historia "<<endl;
			gotoxy(45,14);cout<<"4- Deporte "<<endl;
			gotoxy(45,15);cout<<"5- Entretenimiento  "<<endl;
			gotoxy(45,16);cout<<"6- Ciencia "<<endl;
			gotoxy(45,17);cout<<"0- Salir del Juego"<<endl;
			gotoxy(45,18);cout<<"Elija una opcion--------> "<<endl;
			gotoxy(45,19);cin>>Opcion;
			
		switch (Opcion)
		{
			case 1: //Geografia
			{
				gotoxy(1,20);cout<<"------------------------------------------------------------------------------------------------------------------------";
				gotoxy(52,21);cout<<"Geografia "<<endl;
				gotoxy(1,22);cout<<"------------------------------------------------------------------------------------------------------------------------";
				
				gotoxy(45,23);cout<<"1-�D�nde podemos ver las auroras boreales? "<<endl;
				gotoxy(45,24);cout<<"a) Noruega "<<endl;
				gotoxy(45,25);cout<<"b) Alemania "<<endl;
				gotoxy(45,26);cout<<"c) Espa�a "<<endl;
				gotoxy(45,27);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,28);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
					
				}
			else{
					gotoxy(45,28);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				
				gotoxy(45,29);cout<<"2- �D�nde se encuentra el arrecife de coral m�s grande? "<<endl;
				gotoxy(45,30);cout<<"a) Honduras "<<endl;
				gotoxy(45,31);cout<<"b) Australia "<<endl;
				gotoxy(45,32);cout<<"c) Bahamas "<<endl;
				gotoxy(45,33);cin>>respuesta;
				
				if(respuesta=='b')
				{
					gotoxy(45,34);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,34);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,35);cout<<"3- �Cu�ntas islas hay en todo el mundo? "<<endl;
				gotoxy(45,36);cout<<"a) 11,000"<<endl;
				gotoxy(45,37);cout<<"b) 5,350 "<<endl;
				gotoxy(45,38);cout<<"c) 521 "<<endl;
				gotoxy(45,39);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,40);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,40);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,41);cout<<"4- �Cu�ntos estados forman parte de Estados Unidos? "<<endl;
				gotoxy(45,42);cout<<"a) 30 Estados"<<endl;
				gotoxy(45,43);cout<<"b) 65 Estados "<<endl;
				gotoxy(45,44);cout<<"c) 50 Estados "<<endl;
				gotoxy(45,45);cin>>respuesta;
				
				if(respuesta=='c')
				{
					gotoxy(45,46);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,46);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,47);cout<<"5- �Cu�ntos continentes existen? "<<endl;
				gotoxy(45,48);cout<<"a) Existen 4 continentes: �frica, Europa, Asia, Am�rica "<<endl;
				gotoxy(45,49);cout<<"b) Existen 5 continentes: �frica, Europa, Asia, Am�rica y Ocean�a. "<<endl;
				gotoxy(45,50);cout<<"c) Existen 3 continentes: �frica, Europa, America "<<endl;
				gotoxy(45,51);cin>>respuesta;
				
				if(respuesta=='b')
				{
					gotoxy(45,52);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,52);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,53);cout<<"Tu puntaje es de "<<puntaje<<"/"<<(i+1)*50<<"puntos."<<endl;
				
			
				gotoxy(45,54);cout<<"Total de Buenas:"<<buenas<<endl;
				puntaje += 10;
				gotoxy(45,55);cout<<"Total de Malas:"<<malas<<endl;
				system("pause");
				system("cls");
				break;
			}
			
			case 2: // Arte
			{
				gotoxy(1,20);cout<<"------------------------------------------------------------------------------------------------------------------------";
				gotoxy(52,21);cout<<"Arte"<<endl;
				gotoxy(1,22);cout<<"------------------------------------------------------------------------------------------------------------------------";
				
				gotoxy(45,23);cout<<"1- Qu� parte de la capilla sixtina pint� Miguel �ngel "<<endl;
				gotoxy(45,24);cout<<"a) El techo "<<endl;
				gotoxy(45,25);cout<<"b) Las paredes "<<endl;
				gotoxy(45,26);cout<<"c) Las columnas "<<endl;
				gotoxy(45,27);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,28);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,28);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				
				gotoxy(45,29);cout<<"2- En qu� arte destac� Isadora Duncan "<<endl;
				gotoxy(45,30);cout<<"a) Pintar "<<endl;
				gotoxy(45,31);cout<<"b) Danza "<<endl;
				gotoxy(45,32);cout<<"c) Escultura "<<endl;
				gotoxy(45,33);cin>>respuesta;
				
				if(respuesta=='b')
				{
					gotoxy(45,34);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,34);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,35);cout<<"3- Qu� se conoce como el s�ptimo arte "<<endl;
				gotoxy(45,36);cout<<"a) Arquitectura"<<endl;
				gotoxy(45,37);cout<<"b) Pintura "<<endl;
				gotoxy(45,38);cout<<"c) Cine "<<endl;
				gotoxy(45,39);cin>>respuesta;
				
				if(respuesta=='c')
				{
					gotoxy(45,40);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,40);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,41);cout<<"4- Cu�l es la bas�lica m�s grande de la cristiandad "<<endl;
				gotoxy(45,42);cout<<"a) La Catedral de Sevilla."<<endl;
				gotoxy(45,43);cout<<"b) La Catedral de Mil�n. "<<endl;
				gotoxy(45,44);cout<<"c) San Pedro de El Vaticano. "<<endl;
				gotoxy(45,45);cin>>respuesta;
				
				if(respuesta=='c')
				{
					gotoxy(45,46);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,46);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,47);cout<<"5- En qu� pa�s surgi� el art dec� "<<endl;
				gotoxy(45,48);cout<<"a) Reino Unido "<<endl;
				gotoxy(45,49);cout<<"b) Estados Unidos "<<endl;
				gotoxy(45,50);cout<<"c) Francia"<<endl;
				gotoxy(45,51);cin>>respuesta;
				
				if(respuesta=='b')
				{
					gotoxy(45,52);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,52);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,53);cout<<"Tu puntaje es de "<<puntaje<<"/"<<(i+1)*50<<"puntos."<<endl;
				
				gotoxy(45,54);cout<<"Total de Preguntas Buenas:"<<buenas<<endl;
				puntaje += 10;
				gotoxy(45,55);cout<<"Total de Preguntas Malas:"<<malas<<endl;
				system("pause");
				system("cls");
				break;
			}
			case 3: // Historia
			{
				gotoxy(1,20);cout<<"------------------------------------------------------------------------------------------------------------------------";
				gotoxy(52,21);cout<<"Historia"<<endl;
				gotoxy(1,22);cout<<"------------------------------------------------------------------------------------------------------------------------";
				
				gotoxy(45,23);cout<<"1- �En qu� a�o lleg� el hombre a la Luna?"<<endl;
				gotoxy(45,24);cout<<"a) En el a�o 1969. "<<endl;
				gotoxy(45,25);cout<<"b) En el a�o 1932. "<<endl;
				gotoxy(45,26);cout<<"c) En el a�o 1999. "<<endl;
				gotoxy(45,27);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,28);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,28);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				
				gotoxy(45,29);cout<<"2- �En qu� a�o se disolvi� la Uni�n Sovi�tica? "<<endl;
				gotoxy(45,30);cout<<"a) La disoluci�n sucedi� en el 1961."<<endl;
				gotoxy(45,31);cout<<"b) La disoluci�n sucedi� en el 1956. "<<endl;
				gotoxy(45,32);cout<<"c) La disoluci�n sucedi� en el 1991. "<<endl;
				gotoxy(45,33);cin>>respuesta;
				
				if(respuesta=='c')
				{
					gotoxy(45,34);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,34);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,35);cout<<"3- �Cu�l fue el segundo pa�s americano en conseguir la independencia?"<<endl;
				gotoxy(45,36);cout<<"a) Haiti."<<endl;
				gotoxy(45,37);cout<<"b) Islandia "<<endl;
				gotoxy(45,38);cout<<"c) Ucrania "<<endl;
				gotoxy(45,39);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,40);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,40);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,41);cout<<"4- �Cu�l era la ciudad hogar de Marco Polo?"<<endl;
				gotoxy(45,42);cout<<"a) Paris."<<endl;
				gotoxy(45,43);cout<<"b) Mil�n. "<<endl;
				gotoxy(45,44);cout<<"c) Sevilla. "<<endl;
				gotoxy(45,45);cin>>respuesta;
				
				if(respuesta=='c')
				{
					gotoxy(45,46);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,46);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,47);cout<<"5- �Cu�l fue el primer pa�s en aprobar el sufragio femenino?"<<endl;
				gotoxy(45,48);cout<<"a) Nueva Zelanda"<<endl;
				gotoxy(45,49);cout<<"b) Estados Unidos "<<endl;
				gotoxy(45,50);cout<<"c) Francia"<<endl;
				gotoxy(45,51);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,52);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,52);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,53);cout<<"Tu puntaje es de "<<puntaje<<"/"<<(i+1)*50<<"puntos."<<endl;
				
				gotoxy(45,54);cout<<"Total de Buenas:"<<buenas<<endl;
				gotoxy(45,55);cout<<"Total de Malas"<<malas<<endl;
				system("pause");
				system("cls");
				break;
			}
			
			case 4: // Deporte
			{
				gotoxy(1,20);cout<<"------------------------------------------------------------------------------------------------------------------------";
				gotoxy(52,21);cout<<"Deporte"<<endl;
				gotoxy(1,22);cout<<"------------------------------------------------------------------------------------------------------------------------";
				
				gotoxy(45,23);cout<<"1- �Cu�les son los colores de los cinco anillos ol�mpicos?"<<endl;
				gotoxy(45,24);cout<<"a) Amarillo, azul, negro, rojo y verde. "<<endl;
				gotoxy(45,25);cout<<"b) Amarillo, blanco, negro, rojo y verde. "<<endl;
				gotoxy(45,26);cout<<"c) Amarillo, azul, negro, morado y verde. "<<endl;
				gotoxy(45,27);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,28);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,28);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				
				gotoxy(45,29);cout<<"2- �D�nde se invent� el Ping-Pong? "<<endl;
				gotoxy(45,30);cout<<"a) Estados Unidos."<<endl;
				gotoxy(45,31);cout<<"b) Inglaterra "<<endl;
				gotoxy(45,32);cout<<"c) Rusia "<<endl;
				gotoxy(45,33);cin>>respuesta;
				
				if(respuesta=='b')
				{
					gotoxy(45,34);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,34);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,35);cout<<"3- �Qu� atleta ostenta el r�cord de los 100 metros lisos?"<<endl;
				gotoxy(45,36);cout<<"a) Tyson Gay."<<endl;
				gotoxy(45,37);cout<<"b) Usain Bolt. "<<endl;
				gotoxy(45,38);cout<<"c) Trayvon Bromell. "<<endl;
				gotoxy(45,39);cin>>respuesta;
				
				if(respuesta=='b')
				{
					gotoxy(45,40);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,40);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,41);cout<<"4- �Qui�n es el m�ximo goleador hist�rico de los mundiales de f�tbol?"<<endl;
				gotoxy(45,42);cout<<"a) Miroslav Klose."<<endl;
				gotoxy(45,43);cout<<"b) Cristiano Ronaldo."<<endl;
				gotoxy(45,44);cout<<"c) Leonel Messi."<<endl;
				gotoxy(45,45);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,46);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,46);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,47);cout<<"5- �Cu�l es el equipo de la NBA con m�s t�tulos?"<<endl;
				gotoxy(45,48);cout<<"a) Miami Heat."<<endl;
				gotoxy(45,49);cout<<"b) Chicago Bulls. "<<endl;
				gotoxy(45,50);cout<<"c) Los Boston Celtics."<<endl;
				gotoxy(45,51);cin>>respuesta;
				
				if(respuesta=='c')
				{
					gotoxy(45,52);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,52);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,53);cout<<"Tu puntaje es de "<<puntaje<<"/"<<(i+1)*50<<"puntos."<<endl;
				
				gotoxy(45,54);cout<<"Total de Buenas:"<<buenas<<endl;
				puntaje += 10;
				gotoxy(45,55);cout<<"Total de Malas"<<malas<<endl;
				system("pause");
				system("cls");
				break;
			}
			
			case 5: // Entretenimiento
			{
				gotoxy(1,20);cout<<"------------------------------------------------------------------------------------------------------------------------";
				gotoxy(52,21);cout<<"Entretenimiento"<<endl;
				gotoxy(1,22);cout<<"------------------------------------------------------------------------------------------------------------------------";
				
				gotoxy(45,23);cout<<"1- �Cu�l fue la primera pel�cula de Disney?"<<endl;
				gotoxy(45,24);cout<<"a) Blancanieves. "<<endl;
				gotoxy(45,25);cout<<"b) La Sirenita. "<<endl;
				gotoxy(45,26);cout<<"c) La Bella y la Bestia. "<<endl;
				gotoxy(45,27);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,28);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,28);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				
				gotoxy(45,29);cout<<"2- �C�mo se llama la madre de Simba en la pel�cula de �El rey le�n�? "<<endl;
				gotoxy(45,30);cout<<"a) Esmeralda."<<endl;
				gotoxy(45,31);cout<<"b) Sarabi. "<<endl;
				gotoxy(45,32);cout<<"c) Clara "<<endl;
				gotoxy(45,33);cin>>respuesta;
				
				if(respuesta=='b')
				{
					gotoxy(45,34);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,34);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,35);cout<<"3- �Cu�l fue la primera pel�cula en ganar el �scar a �Mejor pel�cula�?"<<endl;
				gotoxy(45,36);cout<<"a) Alas."<<endl;
				gotoxy(45,37);cout<<"b) Rey Leon. "<<endl;
				gotoxy(45,38);cout<<"c) Doris. "<<endl;
				gotoxy(45,39);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,40);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,40);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,41);cout<<"4- �Qu� d�o musical particip� en la banda sonora de la pel�cula �Tron: Legacy�?"<<endl;
				gotoxy(45,42);cout<<"a) Daft Punk."<<endl;
				gotoxy(45,43);cout<<"b) Estelares"<<endl;
				gotoxy(45,44);cout<<"c) Imagen Dragons."<<endl;
				gotoxy(45,45);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,46);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,46);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,47);cout<<"5- �C�mo se llama el l�der de los Autobots en la saga de pel�culas de �Transformers�?"<<endl;
				gotoxy(45,48);cout<<"a) Drift."<<endl;
				gotoxy(45,49);cout<<"b) Bumblebee. "<<endl;
				gotoxy(45,50);cout<<"c) Optimus Prime."<<endl;
				gotoxy(45,51);cin>>respuesta;
				
				if(respuesta=='c')
				{
					gotoxy(45,52);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,52);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,53);cout<<"Tu puntaje es de "<<puntaje<<"/"<<(i+1)*50<<"puntos."<<endl;
				
				gotoxy(45,54);cout<<"Total de Buenas:"<<buenas<<endl;
				puntaje += 10;
				gotoxy(45,55);cout<<"Total de Malas"<<malas<<endl;
				system("pause");
				system("cls");
				break;
			}
			
			case 6: // Ciencia
			{
				gotoxy(1,20);cout<<"------------------------------------------------------------------------------------------------------------------------";
				gotoxy(52,21);cout<<"Ciencia"<<endl;
				gotoxy(1,22);cout<<"------------------------------------------------------------------------------------------------------------------------";
				
				gotoxy(45,23);cout<<"1- �En qu� mes el Sol est� m�s cerca de la Tierra?"<<endl;
				gotoxy(45,24);cout<<"a) Enero "<<endl;
				gotoxy(45,25);cout<<"b) Septiembre. "<<endl;
				gotoxy(45,26);cout<<"c) Diciembre. "<<endl;
				gotoxy(45,27);cin>>respuesta;
				
				if(respuesta=='c')
				{
					gotoxy(45,28);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,28);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				
				gotoxy(45,29);cout<<"2- �Qu� n�mero viene despu�s del 14 en los decimales del Pi? "<<endl;
				gotoxy(45,30);cout<<"a) 1"<<endl;
				gotoxy(45,31);cout<<"b) 3. "<<endl;
				gotoxy(45,32);cout<<"c) 13 "<<endl;
				gotoxy(45,33);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,34);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,34);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,35);cout<<"3- �Cu�ntos elementos tiene la tabla peri�dica?"<<endl;
				gotoxy(45,36);cout<<"a) Tiene un total de 118."<<endl;
				gotoxy(45,37);cout<<"b) Tiene un total de 132. "<<endl;
				gotoxy(45,38);cout<<"c) Tiene un total de 107. "<<endl;
				gotoxy(45,39);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,40);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,40);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,41);cout<<"4- �Cu�l es la velocidad de la luz?"<<endl;
				gotoxy(45,42);cout<<"a) 300.000 kil�metros por segundo."<<endl;
				gotoxy(45,43);cout<<"b) 500.000 kil�metros por segundo."<<endl;
				gotoxy(45,44);cout<<"c) 100.000 kil�metros por segundo."<<endl;
				gotoxy(45,45);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,46);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,46);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,47);cout<<"5- De los cinco sentidos, �cu�l es el que se desarrolla primero?"<<endl;
				gotoxy(45,48);cout<<"a) El olfato."<<endl;
				gotoxy(45,49);cout<<"b) EL Gusto. "<<endl;
				gotoxy(45,50);cout<<"c) EL tacto."<<endl;
				gotoxy(45,51);cin>>respuesta;
				
				if(respuesta=='a')
				{
					gotoxy(45,52);cout<<"La Respuesta es corresta "<<endl;
					buenas++;
					puntaje += 10;
				}
			else{
					gotoxy(45,52);cout<<"La Respuesta es incorrecta"<<endl;
					malas++;
				}
				gotoxy(45,53);cout<<"Tu puntaje es de "<<puntaje<<"/"<<(i+1)*50<<"puntos."<<endl;
				
				gotoxy(45,54);cout<<"Total de Buenas:"<<buenas<<endl;
				puntaje += 10;
				gotoxy(45,55);cout<<"Total de Malas"<<malas<<endl;
				system("pause");
				system("cls");
				break;
			}
			
			case 0: //Salir
			{
				cout<<"Salio del juego"<<endl;
				system("pause");
				system("cls");
				break;
			}
			
			
		}
		}
	}
	
}
