#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#define DIM 10
using namespace std;


//ESAME 04/06/2021

//ESERCIZIO I

struct nodo
{
    double val;
    int next;
};


bool find_loop(nodo A[],int n)
{
 
}


//ESERCIZIO II

struct appartamento
{
    char nome[DIM];
    int prezzo;
    int posti;
    appartamento* next;
};

typedef appartamento* p_appartamento;


p_appartamento function(p_appartamento head,int n)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        float max=1000000;
        p_appartamento temp=head;
        while(temp->next!=NULL)
        {
            if(temp->posti<n && temp->prezzo<max)
            {
                max=temp->prezzo;
            }
            temp=temp->next;
        }
        p_appartamento curr=temp;
        p_appartamento prec=curr;
        while(curr->next!=NULL)
        {
            if(curr->prezzo==max)
            {
            if(head==curr)
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
            else
            prec=curr;
            curr=curr->next;
            }
        }
        return head;

    }
}



float prenota(p_appartamento head,int n_persone,int giorni)
{
    float prezzo=0;
    if(head==NULL)
    {
        return prezzo;
    }
    else
    {
        p_appartamento temp=head;
        while(temp->next!=NULL)
        {
            if(temp->posti==n_persone)
            {
                prezzo=prezzo+(giorni*temp->prezzo);
            }
            temp=temp->next;
        }
        return prezzo;
    }
}


//ESERCIZIO III

class stanza
{
    protected:
    int L; //numero posti letto
    int P; //persone che ospitano
    float costo;
    public:
    stanza(int L,int P,int costo)
    {
        if(L<0)
        {
            this->L=0;
        }
        else
        this->L=L;
        if(P<0)
        {
            this->P=0;
        }
        else
        this->P=P;
        if(costo<0)
        {
            this->costo=0;
        }
        else
        this->costo=costo;
    }
    float calcola_costo()
    {
        float f;
        f=L+(P/L)-1;
        return f*costo;
    }


}





class bungalow
{
    protected:
    int f_percentuale;
    int ombrellone;
    public:
    bungalow(int f_percentuale,bool x,int L,int P,float costo):stanza(L,P,costo)
    {
        this->f_percentuale=f_percentuale;
        if(bool)
        {
            this->ombrellone=10;
        }
        else
        this->ombrellone=0;
    }
    float calcola_costo()
    {
        float costo;
        costo=stanza::calcola_costo();
        costo=costo+(costo*f_percentuale/100);
        return costo+ombrellone;
    }

}