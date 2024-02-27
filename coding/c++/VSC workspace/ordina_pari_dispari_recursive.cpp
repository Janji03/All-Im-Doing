#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#define DIM 10
using namespace std;

//ordina array con prima numeri pari e poi numeri dispari


void ordina_array(int A[],int N,int i)
{
    if(i!=N)
    {
        if(A[i]%2!=0)
        {
            int temp;
            temp=A[i];
            A[i]=A[N];
            A[N]=temp;
            return ordina_array(A,N-1,i);
        }
        else
        return ordina_array(A,N,i+1);
    }
    

    
}

void carica(int A[],int N)
{
    srand(time(0));
    for(int i=0;i<N;i++)
    {
        A[i]=rand()%10;
    }
}

void stampa(int A[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int A[DIM];
    int N;
    cout<<"inserisci N"<<endl;
    cin>>N;
    carica(A,N);
    stampa(A,N);
    cout<<endl;
    ordina_array(A,N-1,0);
    stampa(A,N);
    return 0;
}