#include <iostream>
using namespace std;
//dato un numero stampare la somma delle sue cifre
int main()
{
	int n,somma=0;
	cout<<"inserisci n"<<endl;
	cin>> n;
	if (n<10)
	{
		cout<<"somma vale"<<endl<<n;
		
	}
	else 
	{
	while(n>0)
	{
		somma=somma + (n%10);
		n=n/10;
	}
	cout<<"somma vale"<<endl <<somma;
    }
	return 0;
}