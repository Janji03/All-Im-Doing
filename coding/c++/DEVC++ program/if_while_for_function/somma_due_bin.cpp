#include<iostream>
#include <math.h> 
using namespace std;

int somma(int,int);
int converti_bin(int);
void converti(int);

int main()
{
	int a,b,sum;
	cout<<"inserisci due numeri binari"<<endl;
	cin>> a>> b;
	a=converti_bin(a);
	b=converti_bin(b);
	sum=somma(a,b);
	converti(sum);
	return 0;
}

int converti_bin(int n)
{
	float ris=0,exp=0;
	do
	{
		if(n%10!=0)
		{
			ris=ris+(pow(2,exp));
		}
		exp++;
		n=n/10;
		
	}while(n>0);
	return ris;
}

int somma(int a, int b)
{
	int somma=a+b;
	return somma;
}

void converti(int n)
{
	int z=0;
	do
	{
		if(n%2==0)
		{
			cout<<"0";
		}
		else
		{
			cout<<"1";
		}
		n=n/2;
	}while(n>0);
	
	
}