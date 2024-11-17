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

p_lista head_insert_random(p_lista head,int x) //funzione che genera una lista random 
{
    p_lista temp; //creo un nuovo puntatore e lo inizzializzo ad una nuova lista
    temp= new lista;
    temp->val=x; //inserisco il valore x in temp 
    temp->next =head; // temp punta poi a head (=NULL)
    return temp; //ritorno temp 
}


void media(p_lista head,int N)
{
    p_lista temp=head;
    double media;
    int somma=0;
    while(head!=NULL)
    {
        somma= somma+head->val;
        head= head-> next;
    }
    media=somma/(double)N;
    int x=head->val;
    head=head->next;
    while (temp!=NULL)
    {
        if((temp->val)-media > (temp->next)-media)
        {
            x= temp->next;
        }
    }
    cout<<"media vale"<<endl;
    cout<<media;
    cout<< "x vale"<<endl;
    cout<<x;
}

int main()
{
    int N,x;
    p_lista head=NULL;
    cout <<"inserisci N"<<endl;
    cin>> N;
    srand(time(0));
    for (int i=0; i<N; i++)
    {
       
        x=rand()%100;
        head=head_insert_random(head,x);

    }

    p_lista temp=head;
    while (temp!=NULL)
    {
        cout<< temp->val<<" ";
        temp=temp->next;   
    }
    p_lista temp1=head;
    media(temp1,N);
    return 0;

}


