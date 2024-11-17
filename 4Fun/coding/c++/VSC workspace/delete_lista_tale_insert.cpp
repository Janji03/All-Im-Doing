
#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;


struct lista
{
    int val;
    lista*p_lista;
};

typedef lista* p_lista;


//rimuovere elemento dalla lista:
//caso base: se la lista è vuota ritorni NULL
//altrimenti: definisci una lista che punta a head (curr) e una al precedente (prec)
//ciclo su curr: se trovo l'elemento da rimuovere ho 2 casi
//caso 1: curr è uguale a head: allora mando avanti head, cancello curr e inizializzo di nuovo curr e prec
//caso 2: curr è diverso da head: allora faccio puntare prec al successivo di curr e cancello curr
//successivamente faccio puntare curr al successivo di prec
//se non trovo l'elemento vado avanti nel ciclo: prec diventa curr e curr diventa curr next

p_lista remove(p_lista head,int n)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        p_lista curr=head;
        p_lista prec=curr;
        while(curr->next!=NULL)
        {
            if(curr->val==n)
            {
              if(curr==head)
              {
                head=head->next;
                delete curr;
                curr=head;
                prec=curr;
              }
              else
              {
                prec->next=curr->next;
                delete curr;
                curr=prec->next;
              }
            }
            else
            prec=curr;
            curr=curr->next;
        }
        return head;
    }
}


//inserimento in coda di una lista:
// se la lista è vuota sono gia in coda: inserisco gli elementi e metto head->next=NULL
//altrimenti dichiaro temp che punta a head e lo scorro fino a che temp->next!=NULL 
//quando arrivo alla coda ovvero temp->next, inserisco gli elementi e metto temp->next=NULL


p_lista tale_insert(p_lista head, int n)
{
    if (head == NULL)
    {
    head=new lista;
    head->val=n;
    head->next=NULL;
    return head;
    }
     else 
    { 
        p_lista temp=head;
        while (temp->next != NULL)
        {
        temp=temp->next;
        }
        temp->next = new lista;
        temp=temp->next;
        temp->val=n;
        temp->next = NULL;
        head=temp;
        return head;
    }
}


