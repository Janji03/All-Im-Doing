#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#define DIM 10
using namespace std;

//esame 27/05/2022

//ESERCIZIO I

struct nodo
{
    int val;
    int next;
};


void revert(nodo A[],int DIM)
{
    int c=0;
    int i=0;
    int B[DIM];
    while(A[i].next!=-1)
    {
        c++;
        B[i]=A[i].next;
        i++;
    }
    int j=0;
    while(c>0)
    {
        swap(&A[i].val,&A[j].val);
        A[j].next=B[i];  
        j++;
        i--;
        c--;
    }
    A[j].next=-1;

}


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    b*=temp;
}

//ESERCIZIO II

struct viaggio
{
    char partenza[DIM];
    char arrivo[DIM];
    float prezzo;
    int n_posti;
    int n_cambi;
    viaggio* next;
};

typedef viaggio* p_viaggio;


float cerca_viaggio(p_viaggio head,char partenza[],char arrivo[],int posti,int cambi)
{
    float prezzo=0;
    bool found=false;
    if(head==NULL)
    {
        return prezzo;
    }
    else
    {
        p_viaggio temp=head;
        while(head->next!=NULL && !found)
        {
            if(strcmp(temp->partenza,partenza)==0 && strcmp(temp->arrivo,arrivo)==0 && temp->n_posti>=posti && temp->cambi>=cambi)
            {
                prezzo=temp->prezzo;
                found=true;
            }
        }
        return prezzo;
    }
}

p_viaggio aggiungi_viaggio(p_viaggio head,char partenza[],char arrivo[],float prezzo,int posti,int cambi)
{
    if(head==NULL)
    {
        p_viaggio temp=new viaggio;
        strcpy(temp->partenza,partenza);
        strcpy(temp->arrivo,arrivo);
        temp->prezzo=prezzo;
        temp->posti=posti;
        temp->cambi=cambi;
        temp->next=NULL;
        head=temp;
        return head;
    }
    else
    {
        p_viaggio scorri=head;
        bool found=false;
        while(scorri->next!=NULL && !found)
        {
            if(strcmp(scorri->partenza,partenza)==0 && strcmp(scorri->arrivo,arrivo)==0)
            {
                found=true;
            }
            else
            scorri=scorri->next;
        }
        if(!found)
        {
        p_viaggio temp=new viaggio;
        strcpy(temp->partenza,partenza);
        strcpy(temp->arrivo,arrivo);
        temp->prezzo=prezzo;
        temp->posti=posti;
        temp->cambi=cambi;
        temp->next=NULL;
        scorri->next=temp;
        return head;
        }
    }
}

//ESERCIZIO III


struct incontro
{
    int orario;
    char titolo[DIM];
    char nome[DIM];
}


class Conferenza
{
    protected:
    int inizio;
    int fine;
    int pranzo;
    incontro array[DIM];
    int N;
    public:
    Conferenza(int inizio,int fine,int pranzo)
    {
        //if conditions (non mi va di farle)
        this->inizio=inizio;
        this->fine=fine;
        if(this-fine>pranzo && this->inzio<pranzo)
        this->pranzo=pranzo;
        else
        this->pranzo=0;
        this->N=0;
    }
    int n_slot()
    {
        return fine-inizio-1-N;
    }
    bool controlla_orario(int x)
    {
        if(x>inzio && x<fine && x!=pranzo)
        {
            return false;
        }
        else
        return true;
    }
    bool controlla_slot(int x)
    {
        bool check=false;
        for(int i=0;i<N;i++)
        {
            if(x!=array[i].orario)
            {
                check=true;
            }
        }
        return check;
    }
    bool aggiungi_incontro(int orario,char titolo,char nome)
    {
        if(n_slot>0 && controlla_slot(orario) && controlla_slot(orario))
        {
            if(N<DIM)
            {
                array[N+1].orario=orario;
                strcpy(array[N+1].nome,nome);
                strcpy(array[N+1].titolo,titolo);
                return true;
                N=N+1;
            }
        }
        else
        return false;
    }


};


class ConferenzaPremium:public Conferenza
{
    protected:
    int orario_poster;
    public:
    ConferenzaPremium(int orario_poster,int inizio,int fine,int pranzo):Conferenza(inizio.fine,pranzo)
    {
        this->orario_poster=orario_poster;
    }
    int n_slot()
    {
        return Conferenza::n_slot()-orario_poster;
    }
    bool controlla_orario(int x)
    {
        bool check=Conferenza::controlla_orario(x);
        if(check && x!=orario_poster)
        {
            return true;
        }
        else
        return false;
    }
    bool controlla_slot(int x)
    {
        bool check=Conferenza::controlla_slot(x);
        if(check && x!=orario_poster)
        {
            return true;
        }
        else
        return false;
    }
    bool aggiungi_incontro(int orario,char titolo,char nome)
    {
        if(orario!=orario_poster)
        {
            return Conferenza::aggiungi_incontro(orario,titolo,nome);
        }
        else
        return false; 
    }
}