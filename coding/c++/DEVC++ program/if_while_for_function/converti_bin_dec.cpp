#include <iostream>
#include <math.h> 
using namespace std;

void converti_bin(int);

int main()
{
	int n;
	cout<<"inserisci numero binario"<<endl;
	cin>>n;
	converti_bin(n);
	return 0;
	
}

void converti_bin(int n)
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
	cout<<"vale"<<endl;
	cout<<ris;
}