#include<iostream>
#include<cstdlib>
#include<ctime>
//pila da riguardare perchè sbagliato
using namespace std;
const int DIM=10;

bool empty (int,int  );
int push (int [], int );
void  pop (int [],int );

int main()
{
	int V[DIM],N,i;
	bool check=true;
	
	cout<<"inserisci N"<<endl;
	cin>> N;
	
	do
	{
		if(check)
		{
			V[i]=push(V,i);
			
		}
		i++;
	}while(i<N && check);
	
	for(i=0;i<N;i++)
	{
		pop(V,i);
	}
	
	return 0;


}


bool empty(int i,int N)
{
	if(i>N)
	{
		cout<<"pieno"<<endl;
		return false;
	}
	else
	return true;
	
	
}

int push (int V[DIM],int i)
{
	cout<<"inserisci elemento"<<" "<<i<<endl;
	cin>> V[i];
	
	return V[i];
}

void pop (int V[DIM],int i)
{
	cout<<V[i]<<" ";
	
}