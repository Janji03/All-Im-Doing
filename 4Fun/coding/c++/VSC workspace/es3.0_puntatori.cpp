#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 10
using namespace std;

typedef int* p_int;
//dati 10 valori inserirli in un array usando puntatore 

int main()
{
    p_int p;
    int n, i=0;
    int V[DIM];
    cout<<"inserisci 10 valori"<<endl;
    int N=10;
    while(N>0)
    {
        cout<<"inserisci n"<<endl;
        cin>> n;
        p=&n;
        V[i]= *p;
        i++;
        N--;
    }
    for(int i=0; i<10;i++)
    {
        cout<<V[i];
        cout<<" ";
    }
    return 0;
}