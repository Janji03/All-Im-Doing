#include <iostream>
#define DIM 10
#include <cstdlib>
#include <ctime>
using namespace std;
//ordinamento con algoritmo di bubbleSort (da finire)
void carica(int [],int);
void stampa(int [],int);
void bubbleSort(int[],int);
void swap(int *, int *);
int main()
{
    int N;
    int V[DIM];
    cout<<"inserisci N"<<endl;
    cin>>N;
    carica(V,N);
    bubbleSort (V,N);
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

void bubbleSort (int V[],int N)
{
   for(int i=0;i<N;i++)
   {
    for(int j=0;j<N-i;j++)
    {
        if(V[j]>V[j+1])
        {
            swap(&V[j],&V[j+1]);
        }
    }
   }

    
   stampa(V,N);
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
