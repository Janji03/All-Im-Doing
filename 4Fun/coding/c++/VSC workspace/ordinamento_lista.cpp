#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;


//ordinamento di una lista 
//2 funzioni 


//funzione che prende in input una lista e restituisce una nuova lista ordinata

p_lista ordina(p_lista head)
{
    p_lista temp=NULL;
    while(head!=NULL)
    {
        if(head->campi==condition)
        {
            temp=ordina_insert(temp,head->campi)
        }
        head=head->next;
    }
    return temp;
}

//

p_lista ordina_insert(p_lista temp,int campo)
{
    p_lista nuovo=new lista
    nuovo->campo=campo;
    if(temp==NULL)
    {
        nuovo->next=temp
        temp=nuovo
    }
    else
    {
        p_lista curr=temp;
        p_lista prec=NULL
        bool found=false;
        while(curr!=NULL && !found)
        {
            if(curr->campo>campo)
            {
                found=true;
                if(prec=NULL)
                {
                    nuovo->next=temp
                    temp=nuovo
                }
                else
                {
                    prec->next=nuovo
                    nuovo->next=NULL
                }
            }
            else
            {
                prec=curr
                curr=curr->next
            }
        }
        if(!found)
        {
            prec->next=nuovo
            nuovo->next=NULL
        }
    }
    return temp;
}