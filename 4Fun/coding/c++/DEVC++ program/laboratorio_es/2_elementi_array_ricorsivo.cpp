#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#define DIM 10
using namespace std;

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


int due_elementi(int A[],int N,int cont)
{
    if(N==0)
    {
        return cont;
    }
    else
    {
        int temp=1;
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(A[i]==A[j])
                {
                    temp++;
                }
            }
        }
        if(temp==2)
        {
            return due_elementi(A,N,cont+1);
        }
        else
        {
            return due_elementi(A,N,cont);
        }
    }
}

int main()
{
    int A[DIM];
    int N,cont=0;
    cout<<"inserisci N"<<endl;
    cin>>N;
    carica(A,N);
    stampa(A,N);
    cont=due_elementi(A,N,cont);
    cout<<cont;
    return 0;

}