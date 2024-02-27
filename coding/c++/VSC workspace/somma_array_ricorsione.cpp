#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 10
using namespace std;

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

int somma(int V[],int N)
{
    if(N==0)
    {
        return 0;
    }
    else
    return (somma(V,N-1)+V[N-1]);
}

int main()
{
    int V[DIM];
    int N;
    int sum;
    cout<<"inserisci N"<<endl;
    cin>>N;
    carica(V,N);
    sum=somma(V,N);
    cout<<sum;
    return 0;

}
