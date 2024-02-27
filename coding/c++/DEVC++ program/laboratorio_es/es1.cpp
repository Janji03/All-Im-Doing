#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main()
{
	int a,b;
	double ris;
	cout<<"inserisci a e b"<<endl;
	cout<<"sincero se inserisci b zero non ci sta zeeeeby"<<endl;
	cin>>a>>b;
	ris= a+b;
	cout<< ris<<endl;
	ris =a-b;
	cout<<ris<<endl;
	ris = a*b;
	cout<<ris<<endl;
	ris=(double)a/b;
	cout<<setprecision(5)<<ris<<endl;
	ris=a%b;
	cout<<ris<<endl;
	
	return 0;
}