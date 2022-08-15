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
				
				gotoxy(45,23);cout<<"1-¿Dónde podemos ver las auroras boreales? "<<endl;
				gotoxy(45,24);cout<<"a) Noruega "<<endl;
				gotoxy(45,25);cout<<"b) Alemania "<<endl;
				gotoxy(45,26);cout<<"c) España "<<endl;
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
				
				gotoxy(45,29);cout<<"2- ¿Dónde se encuentra el arrecife de coral más grande? "<<endl;
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
				gotoxy(45,35);cout<<"3- ¿Cuántas islas hay en todo el mundo? "<<endl;
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
				gotoxy(45,41);cout<<"4- ¿Cuántos estados forman parte de Estados Unidos? "<<endl;
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
				gotoxy(45,47);cout<<"5- ¿Cuántos continentes existen? "<<endl;
				gotoxy(45,48);cout<<"a) Existen 4 continentes: África, Europa, Asia, América "<<endl;
				gotoxy(45,49);cout<<"b) Existen 5 continentes: África, Europa, Asia, América y Oceanía. "<<endl;
				gotoxy(45,50);cout<<"c) Existen 3 continentes: África, Europa, America "<<endl;
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
				
				gotoxy(45,23);cout<<"1- Qué parte de la capilla sixtina pintó Miguel Ángel "<<endl;
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
				
				gotoxy(45,29);cout<<"2- En qué arte destacó Isadora Duncan "<<endl;
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
				gotoxy(45,35);cout<<"3- Qué se conoce como el séptimo arte "<<endl;
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
				gotoxy(45,41);cout<<"4- Cuál es la basílica más grande de la cristiandad "<<endl;
				gotoxy(45,42);cout<<"a) La Catedral de Sevilla."<<endl;
				gotoxy(45,43);cout<<"b) La Catedral de Milán. "<<endl;
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
				gotoxy(45,47);cout<<"5- En qué país surgió el art decó "<<endl;
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
				
				gotoxy(45,23);cout<<"1- ¿En qué año llegó el hombre a la Luna?"<<endl;
				gotoxy(45,24);cout<<"a) En el año 1969. "<<endl;
				gotoxy(45,25);cout<<"b) En el año 1932. "<<endl;
				gotoxy(45,26);cout<<"c) En el año 1999. "<<endl;
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
				
				gotoxy(45,29);cout<<"2- ¿En qué año se disolvió la Unión Soviética? "<<endl;
				gotoxy(45,30);cout<<"a) La disolución sucedió en el 1961."<<endl;
				gotoxy(45,31);cout<<"b) La disolución sucedió en el 1956. "<<endl;
				gotoxy(45,32);cout<<"c) La disolución sucedió en el 1991. "<<endl;
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
				gotoxy(45,35);cout<<"3- ¿Cuál fue el segundo país americano en conseguir la independencia?"<<endl;
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
				gotoxy(45,41);cout<<"4- ¿Cuál era la ciudad hogar de Marco Polo?"<<endl;
				gotoxy(45,42);cout<<"a) Paris."<<endl;
				gotoxy(45,43);cout<<"b) Milán. "<<endl;
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
				gotoxy(45,47);cout<<"5- ¿Cuál fue el primer país en aprobar el sufragio femenino?"<<endl;
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
				
				gotoxy(45,23);cout<<"1- ¿Cuáles son los colores de los cinco anillos olímpicos?"<<endl;
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
				
				gotoxy(45,29);cout<<"2- ¿Dónde se inventó el Ping-Pong? "<<endl;
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
				gotoxy(45,35);cout<<"3- ¿Qué atleta ostenta el récord de los 100 metros lisos?"<<endl;
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
				gotoxy(45,41);cout<<"4- ¿Quién es el máximo goleador histórico de los mundiales de fútbol?"<<endl;
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
				gotoxy(45,47);cout<<"5- ¿Cuál es el equipo de la NBA con más títulos?"<<endl;
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
				
				gotoxy(45,23);cout<<"1- ¿Cuál fue la primera película de Disney?"<<endl;
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
				
				gotoxy(45,29);cout<<"2- ¿Cómo se llama la madre de Simba en la película de “El rey león”? "<<endl;
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
				gotoxy(45,35);cout<<"3- ¿Cuál fue la primera película en ganar el Óscar a “Mejor película”?"<<endl;
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
				gotoxy(45,41);cout<<"4- ¿Qué dúo musical participó en la banda sonora de la película “Tron: Legacy”?"<<endl;
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
				gotoxy(45,47);cout<<"5- ¿Cómo se llama el líder de los Autobots en la saga de películas de “Transformers”?"<<endl;
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
				
				gotoxy(45,23);cout<<"1- ¿En qué mes el Sol está más cerca de la Tierra?"<<endl;
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
				
				gotoxy(45,29);cout<<"2- ¿Qué número viene después del 14 en los decimales del Pi? "<<endl;
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
				gotoxy(45,35);cout<<"3- ¿Cuántos elementos tiene la tabla periódica?"<<endl;
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
				gotoxy(45,41);cout<<"4- ¿Cuál es la velocidad de la luz?"<<endl;
				gotoxy(45,42);cout<<"a) 300.000 kilómetros por segundo."<<endl;
				gotoxy(45,43);cout<<"b) 500.000 kilómetros por segundo."<<endl;
				gotoxy(45,44);cout<<"c) 100.000 kilómetros por segundo."<<endl;
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
				gotoxy(45,47);cout<<"5- De los cinco sentidos, ¿cuál es el que se desarrolla primero?"<<endl;
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
