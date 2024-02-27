#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#define DIM 100
using namespace std;

//esame 19/02/2021

//ESERCIZIO I


bool find_duplicate(int A[],int N,int i)
{
    if(N==i)
    {
        return false;
    }
    else
    if(N!=i)
    {
        int M=N;
        if(i!=M)
        {
        if(A[i]==A[M])
        {
            return true;
        }
        else
        return find_duplicate(A,M-1,i);
        }
        else
        return find_duplicate(A,N,i++);
    }
    
}


//ESERCIZIO II

struct volo
{
    char partenza[DIM];
    char arrivo[DIM];
    int prezzo;
    int posti;
};

typedef volo* p_volo;



p_volo insert_volo(p_volo head,char partenza[],char arrivo[],int prezzo,int posti)
{
    if(head==NULL)
    {
        p_volo temp=new volo;
    strcpy(temp->partenza=partenza);
    strcpy(temp->arrivo=arrivo);
    temp->prezzo=prezzo;
    temp->posti=posti;
    temp->next=head;
    head=temp;
    return head;
    }
    else
    {
         p_volo temp=new volo;
        while(prezzo>temp->prezzo && temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp=temp->next;
        p_volo temp1=new volo;
        strcpy(temp1->partenza=partenza);
        strcpy(temp1->arrivo=arrivo);
        temp1->prezzo=prezzo;
        temp1->posti=posti;
        temp1->next=head;
        head=temp1;
        return head;
    }
}

bool find_volo(p_volo head,char partenza[],char arrivo[])
{
    if(head==NULL)
    {
        return false;
    }
    else
    {
        p_volo temp=head;
        while(temp->next!=NULL)
        {
            if(strcmp(temp->arrivo,arrivo)==0 && stcmp(temp->partenza,partenza)==0)
            {
                return true;
            }
            else
            temp=temp->next;
        }
        return false;
    }
}


int prezzo_tot(p_volo head,char arrivo[],char partenza,int n_biglietti)
{
    int somma=0;
    if(head==NULL)
    {
        return somma;
    }
    else
    {
        p_volo temp=head;
        while(temp->next!=NULL)
        {
            if(strcmp(temp->arrivo,arrivo)==0 && stcmp(temp->partenza,partenza)==0 && temp->posti>n_biglietti)
            {
                somma=somma+(temp->prezzo*n_biglietti);
            }  
        }
        return somma;
    }
}


//ESERCIZIO III


class biglietto_urbano
{
    protected:
    float prezzo=10;
    public:
   biglietto_urbano()
   {

   }
   float calcola_prezzo()
   {
    return prezzo;
   }
    
};

class biglietto_extra_urbano:public biglietto_extra_urbano
{
    protected:
    float prezzo;
    float distanza;
    public:
    biglietto_extra_urbano(float prezzo,float distanza)
    {
        if(prezzo<0)
        {
            this->prezzo=0;
        }
        else
        this->prezzo=prezzo;
        this->distanza=distanza;
    }
    float calcola_prezzo()
    {
        return biglietto_urbano::calcola_prezzo()+(prezzo*distanza);
    }
    float calcola_distanza()
    {
        return distanza;
    }
};


class biglietto_nazionale: public biglietto_extra_urbano
{
    protected:
    float prezzo_hs;
    float km;
    public:
    biglietto_nazionale(float prezzo_hs,float km,float prezzo,float distanza):biglietto_extra_urbano(prezzo,distanza)
    {
        if(prezzo_hs<0)
        {
            this->prezzo_hs=0;
        }
        else
        this->prezzo_hs=prezzo_hs;
        if(distanza<0)
        {
            this->distanza=0;
        }
        else
        this->distanza=distanza;
    }
    float calcola_prezzo()
    {
        return biglietto_extra_urbano::calcola_prezzo()+(prezzo_hs*km);
    }
    float calcola_distanza()
    {
        return biglietto_extra_urbano::calcola_distanza()+km; 
    }
};