#include <iostream>
using namespace std;
// calcolatrice 2 interi
int main()
{
	int a,b;
	float x;
	char op;
	int flag=0;
	do
	{
		cout<<"inizia 0"<<endl;
		cout<<"termina 1"<<endl;
		cin>>flag;
		if(flag==0)
		{
			cout<<"inserisci a e b"<<endl;
			cin>>a;
			cin>>b;
			do
			{
				cout<<"inserisci operatore + o - o / o *"<<endl;
			    cin>> op;
			    if(op!='+' && op!='-' &&op!='*' &&op!='/' )
			    {
			    	cout<<"coglione"<<endl;
				}
			}while(op!='+' && op!='-' && op!='*' && op!='/' );//da 20 a 28 meglio metterlo in una funzione controllo
			
			if(op=='+')
			{
			
			
				x=a+b;
				cout<<x<<endl;
			}
			if(op=='-')
			{
				x=a-b;
				cout<<x<<endl;
			}
			if(op=='*')
			{
				x=a*b;
				cout<<x<<endl;
			}
			if(op=='/')
			{
				x=float(a)/b;
				cout<<x<<endl;
			}
			x=0;
		}
	}while(flag==0);
	cout<<"fine "<<endl;
	return 0;
}