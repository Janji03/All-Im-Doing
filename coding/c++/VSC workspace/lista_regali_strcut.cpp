#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;


struct regalo
{
    char nome[DIM];
    char destinatario[DIM];
    int prezzo;
    regalo* next;
};

typedef regalo* p_regalo;


p_regalo insert(p_regalo head,char nome[],char destinatario[],int prezzo)
{
    p_regalo temp=new regalo;
    head->prezzo=prezzo;
    strcpy(head->nome,nome);
    strcpy(head->destinatario,destinatario);
    temp->next=head;
    head=temp;
    return temp;
}

p_regalo delete_name(p_regalo head, char nome[])
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        p_regalo temp=head;
        while(temp->next!=NULL)
        {
            if(strcmp(temp->nome,nome)==0)
            {
                p_regalo p=temp;
                temp=temp->next;
                delete p;
            }
            else
            temp=temp->next;
        }
        return head;
    }
}

int costo_tot(p_regalo head, char destinatario[])
{
    int somma=0;
    if(head==NULL)
    {
        return somma;
    }
    else
    {
        p_regalo temp=head;
        while(temp->next!=NULL)
        {
            if(strcmp(temp->destinatario,destinatario)==0)
            {
                somma=somma+temp->prezzo;
            }
            temp=temp->next;
        }
        return somma;
    }
}
