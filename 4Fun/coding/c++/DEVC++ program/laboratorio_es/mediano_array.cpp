#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 10
using namespace std;

void carica(int [],int);
void stampa(int [],int);
void selectionSort(int[],int);
void swap(int *, int *);
void mediano(int [],int );


int main()
{
    int V[DIM],N;
    cout<<"inserisci N"<<endl;
    cin>>N;
    carica(V,N);
    selectionSort(V,N);
    stampa(V,N);
    mediano(V,N);
    return 0;


}

void carica (int V[],int N)
{
    srand(time(0));
    for(int i=0;i<N;i++)
    {
       V[i]=rand()%100;
       cout << V[i]<<" ";
    }
    cout << endl;
}

void selectionSort (int V[],int N)
{
    int min,temp=0;
   for(int i=0;i<N-1;i++)
   {
    min=V[i];
    for(int j=i+1;j<N;j++)
    {
        
        if(V[j]<min)
        {
            swap(&V[j],&min);

        }

    }
    V[i]=min;
   }
}

void stampa(int V[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<V[i]<<" ";
    }
}

void swap(int *j,int *min)
{
    int temp=*min;
           *min=*j;
            *j=temp;
}


void mediano (int V[],int N)
{
    cout<<"mediano vale"<<endl;
    float mediano=0;
    if(N%2==0)
    {
       mediano= (V[(N/2)-1]+V[(N/2)])/2.0;
       cout<<mediano;
    }
    else
    {
        mediano=V[(N/2)];
        cout<<mediano;
    }
}


