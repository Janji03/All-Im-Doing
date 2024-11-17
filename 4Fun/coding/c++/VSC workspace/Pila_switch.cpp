#include <iostream>
#include<cstdlib>
#include <ctime>
#define DIM 5
using namespace std;
/*sequenze= successione di elementi di un insieme A
-sequenza vuota = epsilon 
-lenght sequenza =sigma
- concatenazione: date due sequenze(sigma =l1,..,ln e sigma1=l1',...,ln') la concatenazione è :
l1,..,ln * l1';...,ln' ; e la lunghezza della concatenazione è (lenght sigma + lenght sigma1)

Pila= sequenza di un insieme A  
comprende le operazioni:
-is empty (Pila) (ritorna un bool, o vuota o non vuota)
-push(Pila, elemento) (ritorna la pila con in cima elemento )
-pop(Pila) (ritorna una pila togliendo il primo elemento (elemento di testa) a meno che la pila non sia vuota)
-is_Full(Pila) (ritorna un bool, o piena o non piena)

implementa una pila usando uno switch 
*/
void push (int [],int);
void pop (int [],int);
void carica(int [],int);
void stampa(int [],int);
int main()
{
  int elemento, scelta,pila[DIM],N;
  
  cout<<"inserisci N"<<endl;
  cin>>N;
  carica(pila,N);

  cout<<"inserisci 1 per push, 2 per pop 0 per uscire"<<endl;
  do
  {
    if(scelta!=0)
    {
    cout<<"inserisci scelta"<<endl;
    cin>>scelta;
  switch(scelta)
  {
    case 0:
    break;
    case 1:
    push(pila,N);
    break;
    case 2:
    pop(pila,N);
    break;
    default:
    cout<<"fine"<<endl;
    
  
    }
    }
  }while (scelta!=0);
return 0;
}

void push (int pila[],int N)
{
    int elemento;
    cout<<"inserisci elemento"<<endl;
    cin>> elemento;
    pila[N]=elemento;
    stampa(pila,N);
}

void pop(int pila [],int N)
{
    cout<< pila[N];
    pila[N]=0;
}

void carica (int pila[],int N)
{
    srand(time(0));
    for(int i=0;i<N;i++)
    {
       pila[i]=rand()%100;
       cout << pila[i]<<" ";
    }
    cout << endl;
}

void stampa(int pila[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<pila[i]<<" ";
    }
}