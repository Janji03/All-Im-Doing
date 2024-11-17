#include <iostream>
using namespace std;
//stabilire se i numeri inseriti sono primi finchè l'utente non inserisce zero
int main()
{
	int n,i,flag=0;
	do
	{
		cout<<"inserisci n"<<endl;
		cin>> n;
		if (n!=0)
		{
			flag=0;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag=1;
			}
		}
		if (flag==1)
		{
			cout<<"non primo"<<endl;
		}
		else
		{
			cout<<"primo"<<endl;
		}
		}
	}while(n!=0);
	
	cout<<"fine";
	return 0;
}