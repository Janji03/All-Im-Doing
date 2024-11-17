#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 10
using namespace std;

void carica(int [],int);

typedef int* p_int;

int main()
{
    int V[DIM];
    int N;
    cout<<"inserisci N"<<endl;
    cin>>N;
    carica(V,N);
    p_int p;
    int V2[DIM];
    for(int i=0; i<N;i++)
    {
        p=&V[i];
        cout<< *p<<" ";
        V2[i]=*p;
    }
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