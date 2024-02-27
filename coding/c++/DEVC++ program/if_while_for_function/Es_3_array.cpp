#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//dato un vettore e un numero n stampare true se n è compreso nel vettore senno false
const int DIM = 10;
int main()
{
	int V[DIM],N,n;
	cout<<"inserisci N"<<endl;
	cin>>N;
	cout<<"carica vettore"<<endl;
	for(int i=0;i<N;i++)
	{
        V[i]=rand()%20;
        cout << V[i] << " ";
    }
    cout<<"inserisci n"<<endl;
    cin>> n;
    bool check=false;
    for(int i=0;i<N;i++)
    {
    	if(V[i]==n)
    	{
    	   check=true;
		}
	}
	
	cout<< check;
	return 0;
    
}