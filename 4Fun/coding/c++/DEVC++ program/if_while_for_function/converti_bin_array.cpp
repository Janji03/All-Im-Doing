#include <iostream>
#include <math.h> 

using namespace std;

const int DIM=100;
int main()
{
	int V[DIM],N,j;
	cout<<"scegli N lunghezza array "<<endl;
	cin>> N;
	cout<<"carica array"<<endl;
	for(j=0;j<N;j++)
	{
		cin>> V[j];
	}
	
	int ris=0,exp;
	exp=N-1;
	for(j=0;j<N;j++)
	{
		if(V[j]==1)
		{
			ris=ris+(pow(2,exp));
		}
		exp--;
	}
	cout<<"risultato vale"<<endl;
	cout<<ris;
	
	return 0;
}