#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct lista
{
    int val;
    lista* next;
};

typedef lista* p_lista;

p_lista head_insert_random(p_lista head, int x)
{
    p_lista temp;
    temp= new lista;
    temp->val=x;
    temp->next=head;
    return temp;
}


void stampa(p_lista temp)
{
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}

void function(p_lista head, int n)
{
    cout<<"rimuovi elementi multipli di n"<<endl;
    p_lista temp;
    temp=head;
    while(temp->next!=NULL)
    {
        if((temp->val)%n==0)
    {
        p_lista p=temp->next;
        delete temp;
        temp=p;
    }
    temp=temp->next;
    }
    cout<<"prova"<<endl;
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}

int main()
{
    int N;
    int n,x;
    p_lista head;
    head=NULL;
    cout<<"inserisci N"<<endl;
    cin>>N;
    cout<<"carica lista random"<<endl;
    srand(time(0));
    for(int i=0;i<N;i++)
    {
        x=rand()%100;
        head=head_insert_random(head,x);
    }
    cout<<"stampo lista"<<endl;
    p_lista temp;
    temp=head;
    stampa(temp);
    cout<<"inserisci n"<<endl;
    cin>> n;
    function(head,n);
    return 0;

}