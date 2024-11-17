#include<iostream>
#include <math.h> 
using namespace std;
//funzione calcolo equazione secondo grado
double eq (double,int,int,int);

int main()
{
	int a,b,c;
	double ris1=0,ris2=1,delta;
	cout<<"inserisci a,b,c"<<endl;
	cin>> a>> b>> c;
	delta=(b*b)-(4*a*c);
	if(delta>=0)
	{
	ris1=eq(ris1,a,b,c);
	cout<<"x0 vale"<<endl;
	cout<<ris1<<endl;
	ris2=eq(ris2,a,b,c);
	cout<<"x1 vale"<<endl;
	cout<<ris2<<endl;
    }
    else
    cout<<"impossibile";
	return 0;
}


double eq (double ris, int a, int b, int c)
{
	if(ris==0)
	{
		ris=((-b)+(sqrt((b*b)-(4*a*c))))/(2*a);
		return ris;
	}
	else 
	{
		ris=((-b)-(sqrt((b*b)-(4*a*c))))/(2*a);
		return ris;
	}
}