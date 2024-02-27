#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, q=1;
	cout<<"inserisci n";
	cin>> n;
	do
	{
		if(pow(2,q)!=n)
		{
			cout<<"log vale";
			cout<<q;
		}
		else
		{
			q++;
		}
		
	}while((pow(2,q)!=n));
	
	return 0;
}
