#include <iostream>
using namespace std;

int main()
{
	int n,flag=0,i;
	cout<<"inserisci n"<<endl;
	cin>> n;
	for(i=2;i<(n/2);i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		cout<<"non primo";
	}
	else
	{
		cout<<" primo";
	}
	return 0;
}