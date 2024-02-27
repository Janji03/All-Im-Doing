#include <iostream>
#include <iomanip>
using namespace std;
// calcolo la radice utilizzando la media geometrica 
// dato n calcola la radice con precisione y
int main()
{
	int n,i=0,y,z,w;
	float x;
	cout<< "inserisci n"<<endl;
	cin>> n;
	cout<<"inserisci la precisione"<<endl;
	cin>>y;
	w=y;
	x=n+1;
	
	do
	{
		x=(x + n/x)*0.5; 
		i++;
	}while(i<100);
	z=(int)x;
	cout<<z;
	x=x-z;
	do
	{
		x=x*10;
		w--;
	}while(w>0);
	cout<<".";
	cout<< setprecision(y)<< x<<endl;
	return 0;
	
	
	
}