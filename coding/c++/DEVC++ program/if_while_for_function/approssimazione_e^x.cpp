#include <iostream>
using namespace std;
//approssimazione e^x
int main()
{
	double n,x;
	double ris=1;
	cout<<"inserisci n e x"<<endl;
	cin>> n >> x;
	ris=ris+x;
	for(int i=2;i<=n;i++)
	{
		int cont=0,y=1;
		do
		{
			y=x*x;
			cont++;
		}while(cont<i);
		y=y/i;
		ris=ris+y;
		
	}
	cout<<"risultato vale"<<endl<<ris;
	return 0;
}