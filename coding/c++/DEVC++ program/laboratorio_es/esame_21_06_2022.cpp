#include <iostream>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdlib>
#define DIM 10
using namespace std;


//esame 21/06/2022

//ESERCIZIO I

int give_max(int V[],int N)
{
    int max=0;
    int temp=1;
   for(int i=0;i<N;i++)
   {
        for(int j=i+1;j<N;j++)
        {
            if(V[i]==V[j])
            {
                temp++;
            }
        }
        if(temp>max)
        {
            max=temp;
        }
        temp=1;
   }
   return max;
}


//ESERCIZIO II

struct piano
{
    int prezzo;
    int giga;
    int sms;
    bool ill;
    piano* next;
};


typedef piano* p_piano;


p_piano nuovo(p_piano head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        p_piano temp=new piano;
        while(head->next!=NULL)
        {
            if(head->ill==true)
            {
                temp->prezzo=head->prezzo;
                temp->giga=head->giga;
                temp->sms=head->sms;
                temp->ill=head->ill;
                temp=temp->next;
            }
            head=head->next;
        }
        temp->next=NULL;
        return temp;
    }
}


p_piano minimo(p_piano head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        float min;
        p_piano temp=new piano;
        temp=NULL;
        min=(head->giga/head->prezzo);
        while(head->next!=NULL)
        {
            if(head->giga/head->prezzo<min)
            {
                min=head->giga/head->prezzo;
                temp->prezzo=head->prezzo;
                temp->giga=head->giga;
                temp->sms=head->sms;
                temp->ill=head->ill;
                temp=temp->next;
            }
            head=head->next;
        }
        return temp;
    }
}


//ESERCIZIO III

#define N_GIOCATORI 30

struct giocatore
{
    char nome[DIM];
    int ingaggio;
};

class squadra
{
    protected:
    char nome_squadra[DIM];
    giocatore A[N_GIOCATORI];
    int N;
    public:
    squadra(char nome_squadra,int N,giocatore B[])
    {
        strcpy(this->nome_squadra,nome_squadra);
        if(N<0 || N>N_GIOCATORI)
        {
            this->N=N_GIOCATORI;
        }
        else
        this->N=N;
        for(int i=0;i<N;i++)
        {
            A[i].ingaggio=B[i].ingaggio;
            strcpy(A[i].nome,B[i].nome);
        }
    }
    float valore_squadra()
    {
        int somma=0;
        for(int i=0;i<N;i++)
        {
            somma=somma+A[i].ingaggio;
        }
        return somma;
    }
}

struct statistiche_calciatore
{
    int goal;
    int assist;
};

struct statistiche_basket
{
    int canestri;
    int perse;
};


class squadra_calcio:public squadra
{
    protected:
    statistiche_calciatore football[N_GIOCATORI];
    public:
    squadra_calcio(statistiche_calciatore array[],char nome_squadra,int N,giocatore B[]):squadra(nome_squadra,N,B)
    {
        for(int i=0;i<N;i++)
        {
            football[i].goal=array[i].goal;
            football[i].assit=array[i].assist;
        }
    }
    int calcola_bonus()
    {
        int somma=0;
        for(int i=0;i<N;i++)
        {
            somma=somma+(football[i].goal*100 + football[i].assist*50);
        }
        return somma;
    }
    float valore_squadra()
    {
        return squadra::valore_squadra()+calcola_bonus();
    }
};


class squadra_basket:public squadra
{
    protected:
    statistiche_basket basket[N_GIOCATORI];
    public:
    squadra_calcio(statistiche_basket array[],char nome_squadra,int N,giocatore B[]):squadra(nome_squadra,N,B)
    {
        for(int i=0;i<N;i++)
        {
            basket[i].canestri=array[i].canestri;
            basket[i].perse=array[i].perse;
        }
    }
    int calcola_bonus()
    {
        int somma=0;
        for(int i=0;i<N;i++)
        {
            somma=somma+(basket[i].canestro*10 - basket[i].perse*5);
        }
        return somma;
    }
    
    float valore_squadra()
    {
        return squadra::valore_squadra()+calcola_bonus;
    }
}
