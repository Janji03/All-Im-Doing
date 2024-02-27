//scrivere una funzione ricorsiva che prende una lista di
//interi e ritorna la somma degli interi nella lista

#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#define DIM 10
using namespace std;


struct lista
{
    int val;
    lista* next;

};

typedef lista* p_lista;

p_lista head_insert_random(p_lista head,int x)
{
    p_lista temp=new lista;
    temp->val=x;
    temp->next=head;
    return temp;
}

void stampa(p_lista head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}

int somma_lista(p_lista head)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        return (somma_lista(head->next)+head->val);
    }
}





int main()
{
    p_lista head=NULL;
    int N;
    cout<<"inserisci N"<<endl;
    cin>> N;
    int x;
    srand(time(0));
    for(int i=0;i<N;i++)
    {
        x=rand()%100;
        head=head_insert_random(head,x);   
    }
    stampa(head);
    int sum=0;
    sum=somma_lista(head);
    cout<<sum;
    return 0;
}