#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;

//come unire due liste e in una terza lista ordinata


p_lista unisci_liste(p_lista a,p_lista b)
{
    p_lista f=NULL;
    while(a!=NULL & b!=NULL)
    {
        if(strcmp(a->autore,b->autore)==-1)
        {
            f=insert(f,a->autore,a->titolo,a->prezzo);
            a=a->next;
        } 
        else
        if(strcmp(a->autore,b->autore)==1)
        {
             f=insert(f,b->autore,b->titolo,b->prezzo);
            b=b->next;
        }
        else
        {
         f=insert(f,b->autore,b->titolo,b->prezzo);
        }
        a=a->next;
        b=b->next;
    }
    while(a!=NULL)
    {
        f=insert(f,a->autore,a->titolo,a->prezzo);
         a=a->next;
    }
    while(b!=NULL)
    {
         f=insert(f,b->autore,b->titolo,b->prezzo);
         b=b->next
    }

}

//funzione che data una lista ne crea una con solo certi elementi e ordinata 

p_lista insert(tutti i campi della lista)
{
    è_lista temp=NULL
    if(head==NULL)
    {
        inserisci gli elementi
    }
    else
    {
        p_lista curr=head;
        p_lista prec=NULL
        while(curr!=NULL)
        {
            if(curr->prezzo<prezzo)
            {
                if(curr=head)
                {
                    p_lista nuovo=new gelato;
                    inserisci gli elementi
                    nuovo->next=head
                    head=nuovo
                }
                else
                {
                    p_lista nuovo=new gelato
                    inserisci elementi
                    nuovo->next=prec->next
                    prec->next=nuovo
                }
            }
            else
            prec=curr;
            curr=curr->next
        }
    }
}


p_lista only_veg(p_lista head)
{
    p_lista temp=NULL;
    while(head!=NULL)
    {
        if(è vegano)
        {
            temp=insert()
        }
        head=head->next;
    }
    return temp;
}