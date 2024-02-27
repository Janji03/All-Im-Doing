#include<iostream>
using namespace std;
//calcolo fattoriale di n

int main()
{
	int n,prod=1;
	cout<<"inserire n";
	cin>> n;
	for(int i=1;i<=n;i++)
	{
		prod=(prod*i);
	}
	cout<<"fattoriale vale"<< endl<<prod;
	return 0;
}