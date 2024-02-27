#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 10
using namespace std;

// dato un vettore ordinarlo e fare la differenza tra il vettore iniziale e quello ordinato 


void carica(int [],int);
void duplica(int [], int [], int);
void stampa(int [],int);
void selectionSort(int[],int);
void swap(int *, int *);
void differenza(int [],int [],int);

int main()
{
    int V[DIM], N;
    int A[DIM];
    cout<<"inserisci N "<<endl;
    cin >> N;
    carica (V,N);
    duplica (V,A,N);
    selectionSort(V,N);
    stampa(V,N);
    cout<<endl;
    differenza(A,V,N);
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


void duplica (int V[], int A[], int N)
{
    for (int i=0; i<N;i++)
    {
        A[i]=V[i];
    }
}

void differenza (int A[], int V[], int N)
{
    int dif=0;
    for(int i=0;i<N;i++)
    {
        dif=A[i]-V[i];
        cout<<dif<<" ";
    }

}