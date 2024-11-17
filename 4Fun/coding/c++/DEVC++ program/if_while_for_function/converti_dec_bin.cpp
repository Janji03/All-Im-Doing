#include <iostream>
using namespace std;

void converti(int);

int main()
{
	int n;
	cout<<"inserisci n";
	cin>>n;
	converti(n);
	return 0;
}

void converti(int n)
{
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