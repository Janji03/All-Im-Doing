#include <iostream>
using namespace std;

int main()
{
	int a,b,x;
	cout<<"inserisci 2 valori";
	cin>> a >> b;
	x=a;
	a=b;
	b=x;
	cout<<a;
	cout<<b;
	return 0;
}