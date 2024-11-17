#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;


struct regalo
{
    char nome[DIM];
    char destinatario[DIM];
    int prezzo=0;
};


typedef regalo* p_regalo;

p_regalo insert(p_regalo head, char nome[],char destinatario[],int prezzo)
{
    p_regalo temp=new regalo;
    strcpy(head->nome,nome);
    strcpy(head->destinatorio,destinatario);
    head->prezzo=prezzo;
    temp->next=head;
    head=temp;
    return temp;
}


p_regalo elimina(p_regalo head,char nome[],char destinatario[])
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        p_regalo temp=head;
        int x;
        int y;
        while(temp->next!=NULL)
        {
           x=strcmp(temp->nome,nome);
           y=strcmp(temp->destinatario,destinatario);
           if(x==0 && y==0)
           {
            p_regalo p;
            p=temp;
            temp=temp->next;
            delete p;
           }
           else
           {
            temp=temp->next;
           }
        }
        return head;
    }
}


int costo_totale(p_regalo head,char destinatario[])
{
    int somma=0;
    if(head==NULL)
    {
        return somma;
    }
    else
    {
        int x;
        p_regalo temp=head;
        while(temp->next!=NULL)
        {
            x=strcmp(temp->destinatario,destinatario);
            if(x==0)
            {
                somma=somma+temp->prezzo;
            }
            temp=temp->next;
        }
        return somma;
    }
}