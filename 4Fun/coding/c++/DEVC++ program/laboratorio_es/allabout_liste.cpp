#include <iostream>
using namespace std;

//liste dinamiche: strutture la cui dimensione non è definita puoi aggiungere quanti elementi vuoi(op)
//

struct lista
{
    int val;
    lista* next; //puntatore di tipo lista 
};

typedef lista* p_lista;

p_lista head_insert(p_lista , int  );

int main()
{
    p_lista head;
    *head.val=5; // punta al campo val della variabile head
     head= new lista;
    head->val=5; //punta al campo val della variabile head 
    head->next=NULL;  
}

p_lista head_insert(p_lista head, int val )
{
    p_lista temp;
    temp= new lista;
    temp-> val=x;
    temp-> next=head;
    return temp;
}