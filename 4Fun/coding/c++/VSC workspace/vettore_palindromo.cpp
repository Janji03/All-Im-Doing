#include <iostream>
#include <math.h>
using namespace std;
//vettore palindromo 
const int DIM = 10;
int main()
{
	int V[DIM],i,j,N;
	cout<<"inserisci N"<<endl;
	cin>> N;
	cout<<"carica vettore"<<endl;
	for(i=0;i<N;i++)
	{
		cin>>V[i];
	}
	int flag=0;
	j=N-1;// superflua , si puo anche esprimere come l-i-1 per otimizzare 
	for(i=0;i<N/2;i++)
	{
		if(V[i]!=V[j])
		{
			flag=1;
		}
	 j--;
	}
	
	if(flag==0)
	cout<<"vettore palindromo"<<endl;
	if(flag==1)
	cout<<"vettore non palindromo"<<endl;
	return 0;
	
}