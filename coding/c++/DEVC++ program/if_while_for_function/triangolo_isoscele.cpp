#include <iostream>
using namespace std;
//triangolo isoscele con ciclo for
int main()
{
	int h,i,j,x;
	cout<<"inserisci valore"<<endl;
	cin>> h;
	for(i=0;i<=h;i++)
	{
		for(j=0;j<(h-i);j++)
		{
			cout<<" ";
		}
		for(j=0;j<(i*2)-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}