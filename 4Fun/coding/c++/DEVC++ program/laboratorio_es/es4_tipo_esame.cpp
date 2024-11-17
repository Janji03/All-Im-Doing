#include <iostream>
#include <cmath>
#define DIM 100
using namespace std;


void carica(int [], int);
void distanza(int [],int );

int main()
{
    int V[DIM];
    int N;
    cout<<"inserire N"<<endl;
    cin>> N;
    carica(V,N);
    distanza(V,N);
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

void distanza (int V[],int N)
{
    int dif=0,max=0;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            dif=abs(V[j]-V[i]);
            if(dif>max)
        {
            max=dif;
        }
        }

    }

    cout<<"max vale";
    cout<<max;

    
}