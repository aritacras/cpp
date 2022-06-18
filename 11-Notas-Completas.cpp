#include <iostream>

using namespace std;

int main(int arg, char const *argv[])
{
	int nota = 0;
	
	cout << "Ingrese la nota que obtuvo:" ;
	cin >> nota;
	
	if (nota >= 96 && nota <= 100)
	{
		cout <<"Obtuvite una A++";
	}
	
	if (nota >= 91 && nota <= 95)
	{
		cout <<"Obtuvite una A+";
	}
	if (nota >= 86 && nota <= 90)
	{
		cout <<"Obtuvite una A";
	}
	if (nota >= 81 && nota <= 85)
	{
		cout <<"Obtuvite una A-";
	}
	if (nota >= 76 && nota <= 80)
	{
		cout <<"Obtuvite una B+";
	}
	if (nota >= 71 && nota <= 75)
	{
		cout <<"Obtuvite una B";
	}
	if (nota >= 66 && nota <= 70)
	{
		cout <<"Obtuvite una B-";
	}
	if (nota >= 61 && nota <= 65)
	{
		cout <<"Obtuvite una C+";
	}
	if (nota >= 56 && nota <= 60)
	{
		cout <<"Obtuvite una C";
	}
	if (nota >= 51 && nota <= 55)
	{
		cout <<"Obtuvite una C-";
	}
	if (nota >= 46 && nota <= 50)
	{
		cout <<"Obtuvite una D+";
	}
	if (nota >= 41 && nota <= 45)
	{
		cout <<"Obtuvite una D";
	}
	if (nota >= 36 && nota <= 40)
	{
		cout <<"Obtuvite una D-";
	}
	if (nota >= 31 && nota <= 35)
	{
		cout <<"Obtuvite una E+";
	}
	if (nota >= 26 && nota <= 30)
	{
		cout <<"Obtuvite una E";
	}
	if (nota >= 21 && nota <= 25)
	{
		cout <<"Obtuvite una E-";
	}
	if (nota >= 16 && nota <= 20)
	{
		cout <<"Obtuvite una F+";
	}
	if (nota >= 11 && nota <= 15)
	{
		cout <<"Obtuvite una F";
	}
	if (nota >= 6 && nota <= 10)
	{
		cout <<"Obtuvite una F-";
	}
	if (nota >= 1 && nota <= 5)
	{
		cout <<"Obtuvite una F--";
	}
	if (nota >= 0 && nota <= 0)
	{
		cout <<"Obtuvite una F---";
	}
		
	return 0 ;
}
