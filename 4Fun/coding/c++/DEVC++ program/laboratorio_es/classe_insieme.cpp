#include <iostream>
#include <cmath>
#define DIM 10
using namespace std;

//creare una classe insieme
//funzioni carica, stampa,unione
//da finire e fixare

void carica(int A[],int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<"inserisci elemento"<<endl;
        cin>>A[i];
    }
}

void stampa1(int A[],int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}


class insieme
{
    protected:
    int N;
    int A[DIM];
    public:
    void make(int length,int A[])
    {
        N=length;
        carica(A,N);
    }
    void stampa()
    {
        stampa1(A,N);
    }
    insieme unione(insieme a,insieme b)
    {
        insieme u;
        int cont=0;
        for(int i=0;i<a.N;i++)
        {
            if(a.A[i]==b.A[i])
            {
                u.A[i]=a.A[i];
                cont++;
            }
        }
        u.N=cont;
        return u;
    }


};


