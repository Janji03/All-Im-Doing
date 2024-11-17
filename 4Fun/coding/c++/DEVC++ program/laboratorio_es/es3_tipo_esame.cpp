#include <iostream>
#define DIM 10
using namespace std;


void carica(int [], int);
void duplicati(int [],int );

int main()
{
    int V[DIM];
    int N;
    cout<<"inserire N"<<endl;
    cin>> N;
    carica(V,N);
    duplicati(V,N);
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


void duplicati(int V[], int N)
{
    int cont=1,cont1=1;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
        if(V[i]==V[j])
        {
            cont1++;
        }
        }
        if(cont1>cont)
        {
            cont=cont1;
        }
        cont1=1;
    }
    cout<<"max duplicati"<<endl;
    cout<<cont;
}
