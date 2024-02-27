#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// data una lista e una valore x stampare la lista senza quel valore 
struct lista
{
int val;
lista* next;
};

typedef lista* p_lista;

p_lista head_insert(p_lista head, int x) //head insert random 
{
    p_lista temp;
    temp= new lista;
    temp-> val=x;
    temp-> next=head;
    return temp;
}

void function (p_lista head, int a) //funzione che data una lista e un elemento stampa la lista senza elemento (se presente)
{
    p_lista temp=head;
    p_lista p=head;
    while (temp!=NULL)
    {
       if(temp->val==a)
       {
        p=temp->next;
        delete temp;
        temp=p;
       }
       temp=temp->next;
    }
    
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    
}

int main()
{
int N,x;
cout <<"inserire N"<<endl;
cin>> N;
p_lista head=NULL;
srand(time(0));
for(int i=0;i<N;i++)
{
    x=rand()%100;
    head=head_insert(head,x);
}
cout<<"stampa lista"<<endl;
p_lista temp=head;
while(temp!=NULL) 
{
    cout<< temp->val<<" ";
    temp=temp->next;
}

int a;
cout<<"inserisci a"<<endl;
cin>> a;
function(head,a);
return 0;
}