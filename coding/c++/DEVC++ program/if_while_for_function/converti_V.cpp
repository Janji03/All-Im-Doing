#include <iostream>
#include <math.h> 
using namespace std;

void converti_V(int V[] , int );

const int DIM=100;
int main()
{
	int V[DIM],N;
	cout<<"scegli N lunghezza array "<<endl;
	cin>> N;
	cout<<"carica array"<<endl;
	for(j=0;j<N;j++)
	{
		cin>>V[j];
	}
	
	converti_V(V,N);
	return 0;
}

void converti_V (int V[], int N)
{
	int ris=0,exp,j=0;
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
}