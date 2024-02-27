#include <iostream>
using namespace std;
//calcolo parte intera log
int main()
{
	int n,cont=0, x=1;
	cout<<"inserisci n";
	cin>> n;
	while(x<=n)
	{
		x=x*2;
		cont++;
	}
	 cont--;
	 cout<< cont;
	 return 0;
}