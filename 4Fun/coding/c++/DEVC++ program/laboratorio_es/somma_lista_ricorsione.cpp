#include <iostream>
#define DIM 10
using namespace std;

struct lista{
    int val;
    lista *next;
};

typedef lista* p_lista;

p_lista head_insert (p_lista head, int x)
{
    p_lista temp;
    temp= new lista;
    temp-> val=x;
    temp->next =head;
    return temp;
}

int sum(p_lista head,int somma)
{
    if(head==NULL)
    {
        return somma;
    }
    else
    somma=somma+head->val;
    return sum(head->next,somma);
    
}


int main()
{
    int x, N;
    p_lista head=NULL;
    cout<<"inserisci N"<<endl;
    cin>>N;
    for(int i =0; i<N;i++)
    {
        cout<<"inserisci elemento "<<endl;
        cin>> x;
        head=head_insert(head,x);

    }
    int somma=0;
    somma=sum(head,somma);
    cout<<somma;

    return 0;
}
