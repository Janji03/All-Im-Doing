#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#define DIM 10
using namespace std;


//check false
//N=N-1
//i=0


bool find_duplicate(int A[],int N,int i)
{
    if(N==0)
    {
        return false;
    }
    else
    {
     if(N!=i)
    {
        if(A[N]==A[i])
        {
            return true;
        }
        else
        return find_duplicate(A,N,i+1);
    }
    else
    {
     return find_duplicate(A,N-1,0);
    }
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
    cout<<"N"<<endl;
    cin>>N;
    carica(A,N);
    stampa(A,N);
    cout<<endl;
    bool check;
    check=find_duplicate(A,N-1,0);
    cout<<check;
    return 0;
}