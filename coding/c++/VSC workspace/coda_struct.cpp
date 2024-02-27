#include <iostream>
#include <cstdlib>
#include <ctime>
#define DIM 10
using namespace std;

struct coda
{
    int data[DIM];
    int last_element;
    int first_element;
    int position_l;
};

coda enqueue (coda );// aggiunge un elemento alla fine della coda 
coda dequeue (coda );// toglie primo elemento e shifta a sinistra
void isempty (int[]);
void full(int []);
coda carica (coda,int);
void stampa(int [],int);


int main()
{
    int V[DIM],N,scelta;
    coda Q;
    cout<<"inserisci N"<<endl;
    cin>>N;
    cout<<"carico coda"<<endl;
    Q=carica(Q,N);
    do
    {
        if(scelta!=0)
        {
            cout<<"inserisci 1 per enq, 2 per deq, 0 per uscire"<<endl;
            cin>>scelta;
            switch(scelta)
            {
                case 1:
                Q=enqueue(Q);
                break;
                case 2:
                Q=dequeue(Q);
                case 0:
                break;
                default:
                cout<<"errore,riprova"<<endl;




            }
        }
    }while(scelta!=0);
    cout<<"fine"<<endl;
    return 0;

    
}



coda carica (coda Q, int N)
{
    srand(time(0));
    int i;
    for( i=0;i<N;i++)
    {
       Q.data[i]=rand()%100;
       cout << Q.data[i]<<" ";
    }
    cout << endl;
    Q.last_element=Q.data[i];
    Q.first_element=Q.data[0];
    Q.position_l=i;
    return Q;
}

coda enqueue(coda Q)
{
    int elemento;
    if(Q.position_l<DIM)
    {
    cout<<"inserisci elemento da aggiungere"<<endl;
    cin>>elemento;
    Q.data[Q.position_l]=elemento;
    for(int i=0;i<Q.position_l+1;i++)
    {
        cout<<Q.data[i]<<" ";
    }
    Q.last_element=elemento;
    Q.position_l=Q.position_l+1;
    }
    

else
cout<<"overflow"<<endl;
return Q;
}
coda dequeue(coda Q)
{
    if(Q.position_l<0)
    {
        cout<<"coda is empty"<<endl;
    }
    else 
    {
        cout<<"primo elemento vale"<<endl;
        cout<<Q.data[0]<<endl;
        for(int i=1;i<Q.position_l;i++)
        {
            Q.data[i-1]=Q.data[i];
        }
        Q.position_l=Q.position_l-1;
        for(int i=0;i<Q.position_l;i++)
        {
        cout<<Q.data[i]<<" ";
        }
        
    }
    return Q;
}