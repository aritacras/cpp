#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	int pares = 0;
	int impares = 0;
	int total = 0;
	
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2== 0 ){
			pares = pares + i;
		}
		else{
			impares = impares + i;
		}
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	total = pares + impares;
	cout << "Total pares: " << pares;
	cout << "                Total impares: " << impares;
	cout << "                Total de pares e impares es " << total;
	
	return 0;
	
}
