#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;	
int random(){
return rand() % 5 + 1;
}
	int main(){
	int random();
	srand(time(NULL));
	int total = 0;
	int numero [5][5];
		
	for(int i = 0; i < 5; i++){
	for(int j = 0; j < 5; j++){
	numero[i][j] = random();
	total = total + numero[i][j];
}
}
	for(int i = 0; i < 5; i++){
	for(int j = 0; j < 5; j++){
	cout<<" "<<numero[i][j];
}
	cout <<endl;
}
	cout<<"Total Suma: "<<total<<endl;
return 0;
}

