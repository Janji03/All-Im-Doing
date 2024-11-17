#include <iostream>
using namespace std;
//cerchio di M
int main()
{
	int r,i,j;
	cout<<"inserire raggio"<<endl;
	cin>>r;
	for (i=-(r);i<r;i++)
	{
	
	for(j=-(r);j<r;j++)
	{
		if(5*i*i +j*j<r*r)
		{
			cout <<"M";
		}
		else
		{
			cout<<".";
		}
	}
	cout<<endl;
   }
   return 0;
}