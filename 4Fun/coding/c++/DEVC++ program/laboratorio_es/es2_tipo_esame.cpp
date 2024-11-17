#include <iostream> 
#define DIM 100
using namespace std;

void carica(int [],int);
void distanza_max(int [],int);



int main()
{
    int A[DIM];
    int N;
    cout<<"inserisci N"<<endl;
    cin>>N;
    carica(A,N);
    distanza_max(A,N);
    return 0;
}


void carica(int V[],int N)
{
    cout<<"carica vettore"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>> V[i];
    }
}

void distanza_max(int A[],int N)
{
    int max=0, max1=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N-1;j++)
        {
            if(A[i]==A[j])
            {
                max1=j-i;
            }
        }
        if(max1>max)
        {
            max=max1;
        }
    }
    cout<<"risultato vale"<<endl;
    cout<<max;
}