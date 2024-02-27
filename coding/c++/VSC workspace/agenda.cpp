#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
#define DIM 10
using namespace std;

struct agenda
{
    char nome[DIM];
    int numero[DIM];
    int dimensione;
};


agenda carica (agenda,int);
void cerca(agenda,agenda,agenda);
void stampa(agenda);

int main()
{
    agenda A,B,C;
    int N;
    cout<<"inserisci N"<<endl;
    cin>>N;
    A=carica(A,N);
    B=carica(B,N); 
    C=carica(C,N);
    cerca(A,B,C);
    return 0;
}


agenda carica (agenda A,int N)
{
    cout<<"inserisci nome"<<endl;
    for(int j=0;j<N;j++)
    {
        cin>>A.nome[j];
    }

    srand(time(0));
    for(int i=0;i<N;i++)
    {
       A.numero[i]=rand()%100;
       cout << A.numero[i]<<" ";
    }
    cout << endl;
    A.dimensione=N;
    return A;
}

void stampa(agenda A)
{
    for(int i=0;i<A.dimensione;i++)
    {
        cout<<A.numero[i];
    }
}

void cerca(agenda A,agenda B, agenda C)
{
    char cerca[DIM];
    
    cout<<"inserisci nome da cercare"<<endl;
    for(int i=0;i<A.dimensione;i++)
    {
        cin>>cerca[i];

    }
    bool check=true;
    for(int j=0;j<A.dimensione;j++)
    {
        if(cerca[j]!=A.nome[j])
        {
            check=false;
        }
    }
    if(check==true)
    {
        stampa(A);
    }
    else 
    {
        for(int j=0;j<B.dimensione;j++)
    {
        if(cerca[j]!=B.nome[j])
        {
            check=false;
        }
    }
    if(check==true)
    {
        stampa(B);
    }
    else
    {
       for(int j=0;j<C.dimensione;j++)
    {
        if(cerca[j]!=C.nome[j])
        {
            check=false;
        }
    } 
    if(check==true)
    {
        stampa(C);
    }
    }

    }
  
}