#include<iostream>
using namespace std;


int main() 
{
	int r;
	cout<<"inserire raggio"<<endl;
	cin>>r;
	for(int i=0; i<=r/2; i++)
	{
		for(int j=0; j<=r+2; j++)
		{
			if(j<=((r/2)-i))
				cout<<" ";
			else if(j<=((r/2)+2+i))
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
