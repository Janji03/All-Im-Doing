#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 10
using namespace std;

struct insieme
{
    int data[DIM];
    int n_element;
};

insieme carica(insieme, int);
void stampa(insieme);
insieme intersection(insieme,insieme);
insieme unione (insieme,insieme);

int main ()
{
    insieme A,B,I,U;
    int N,L;
    cout<<"inserire N"<<endl;
    cin>> N;
    cout<<"inserire L"<<endl;
    cin >>L;
    A=carica(A,N);
    B=carica(B,L);
    cout<<"stampo intersezione e unione"<<endl;
    I=intersection(A,B);
    stampa(I);
    if(L+N<DIM)
    {
    U=unione(A,B);
    stampa(U);   
    }
    else
    {
        cout<<"overflow!"<<endl;
    }
    return 0;
    
}



void stampa(insieme A)
{
    cout<<"stampa insieme"<<endl;
    for(int i =0;i<A.n_element;i++)
    {
        cout<<A.data[i];
        cout<<" ";
    }
    cout<<endl;
}

insieme carica(insieme A,int N)
{
    for(int i=0;i<N;i++)
    {
        cin>>A.data[i];
    }
    A.n_element=N;
    stampa(A);
    return A;
}

insieme intersection(insieme A,insieme B)
{
    insieme C;
    int k=0;
    for(int i=0;i<A.n_element;i++)
    {
        for(int j=0;j<B.n_element;j++)
        {
            if(A.data[i]==B.data[j])
            {
                C.data[k]=A.data[i];
                k++;
            }
        }
    }
    C.n_element=k;
    return C;

}


insieme unione(insieme A, insieme B)
{
    insieme C;
    int k=0;
    int q=0;
    for(int i=0;i<A.n_element;i++)
    {
        C.data[k]=A.data[i];
        k++;
    }
    for(int j=0;j<B.n_element;j++)
    {
        for(int q=0;q<A.n_element;q++)
        {
            if(A.data[q]!=B.data[j])
            {
                C.data[k]=B.data[j];
                k++;                      
            }
        }
    }
    C.n_element=k;
    return C;
}
