#include <iostream>
#define DIM 10
using namespace std;


//definire una funzione che dato un array di interi stabilisce 
// se è presente un elemento almeno 3 volte nell'array

//funzione carica array di dimensione N inserita in input

void carica (int A[],int N)
{
    cout<<"carica vettore"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<"inserisci elemento"<<endl;
        cin>>A[i];
    }
 }

 //funzione bool che restituisce vero se un elemento è presente almeno 3 volte
 //senno falso
 //doppio ciclo for per scorrere ogni elemento con tutto l'array
 //cont=variabile che conta quante volte è presente un elemento 
 //importante inizializzare cont a 1 
 //settare cont=0 ogni volta che si ripete il primo ciclo 

 bool search_3_element(int A[],int N)
 {
    int cont=1;
    bool x=false;
    int j;
    for(int i=0;i<N && x==false;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(A[i]==A[j])
            {
                cont++;
            }
           
        }
        if(cont>=3)
        {
            x=true;
        }
        cont=0;
    }
    return x;
 }


int main()
{
    int A[DIM];
    int N;
    bool x;
    cout<<"inserisci N"<<endl;
    cin>>N;
    carica(A,N);
    x=search_3_element(A,N);
    if(x)
    cout<<"vero"<<endl;
    else
    cout<<"falso"<<endl;
    return 0;

}