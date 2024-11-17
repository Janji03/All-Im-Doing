#include <iostream>
#include <math.h>
using namespace std;

void Mercator_serie (double);

int main()
{
	double x;
	cout<<"inserisci x"<<endl;
	cin>> x;
	Mercator_serie(x);
	return 0;
}

void Mercator_serie (double x)
{
	double ris;
	int n=1;
	do
	{
		ris=ris+((pow(-1,(n+1))/n)*pow(x,n));
		n++;
	}while(n<50);
	cout<<"risultato vale"<<endl;
	cout<< ris;
	
}