#include <iostream>
#include <cstring>
#define DIM 100
using namespace std;

//definire una struttura studente di tre campi
//creare un array di struct di lunghezza N 
//creare una funzione che carica l'array di struct
//creare una funzione che stampa l'array di struct 

struct studente
{
    char nome[DIM];
    char cognome[DIM];
    int numero;
}

//funzione che carica l'array di struct 
//pre condition
//uso cin.getline per i campi nome e cognome (array di char)
void carica (studente A[], int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<"inserisci nome"<<endl;
        cin.getline(A[i].nome,DIM+1);
        cout<<"inserisci cognome"<<endl;
        cin.getline(A[i].cognome,DIM+1);
        cout<<"numero"<<endl;
        cin>> A[i].numero;
    }
}

//funzione che stampa l'array di struct 
//pre condition 

void stampa (studente A[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<< A[i].nome<<endl;
        cout<<A[i].cognome<<endl;
        cout<<A[i].numero<<endl;
    }
}



int main()
{
    int N;
    studente A[DIM];
    cout<<"inserisci N"<<endl;
    cin>> N;
    carica (A,N);
    stampa(A,N);
    return 0;
}