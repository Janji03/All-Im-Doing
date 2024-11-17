#include <iostream>
#define DIM 10
using namespace std;


void carica(int A[], int N)
 {
    cout<<"carica vettore"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<"inserisci elemento"<<endl;
        cin>>A[i];
    }
 }
 
 //funzione che calcola la massima distanza dello stesso elemento presente nell'array
 //se non ci sono doppioni allora ritorna -1
//uso max_temp nel caso ci siano piu coppie di numeri uguali 
//x sarà la distanza massima da returnare
//utilizzo check per fermare il ciclo appena trova due elementi uguali 
 int max_distance(int A[],int N)
 {
    int x=-1;
    int max_temp=-1;
    int j;
    bool check=true;
    for(int i=0;i<N;i++)
    {
        j=i+1;
        while(j<N && check)
        {
            if(A[i]==A[j])
            {
                max_temp=j-i;
                check=false;
            }
            j++;
        }
        if(max_temp>x)
        {
            x=max_temp;
        }
        check=true;
        max_temp=-1;
    }

    return x;
    
 }


int main()
{
    int A[DIM];
    int N;
    cout<<"inserisci N"<<endl;
    cin>>N;
    carica(A,N);
    int x;
    x=max_distance(A,N);
    cout<<x;
    return 0;
}