#include<iostream>
using namespace std;
//somma precedenti di n

int main()
{
	int n,sum=0;
	cout<<"inserire n";
	cin>> n;
	for(int i=0;i<n;i++)
	{
		sum=sum+i;
	}
	cout<<"somma vale"<< endl<<sum;
	return 0;
}