#include <iostream>
#define DIM 10
using namespace std;


void ordina_array(int A[],int N)
{
    int i=0;
    while(i<N)
    {
        if(i%2==0)
        {
        if(A[i]%2==0 && A[i+1]%2!=0)
        {
            i++;
        }
        else
        {
            int temp;
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            i++;
        }
        }
        else
        {
            if(A[i]%2!=0 && A[i+1]%2==0)
            {
                i++;
            }
            else
            {
            int temp;
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            i++;
            }
        }
    }
    i=0;
    while(i<N)
    {
        int j=i+2;
        while(j<N)
        {
            if(A[i]<A[j])
            {
                int temp1;
                temp1=A[i];
                A[i]=A[j];
                A[j]=temp1;
            }
            j=j+2;
        }
        i=i+2;
    }
    i=1;
    while(i<N)
    {
        int j=i+2;
        while(j<N)
        {
            if(A[i]>A[j])
            {
                int temp1;
                temp1=A[i];
                A[i]=A[j];
                A[j]=temp1;
            }
            j=j+2;
        }
        i=i+2;
    }
   
}


void carica(int A[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<"inserisci elemento"<<endl;
        cin>>A[i];
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
    ordina_array(A,N);
    cout<<endl;
    stampa(A,N);
    return 0;
}