#include <iostream>
#include <cstring>
#include <ctime>
#define DIM 10
using namespace std;

//ESAME 13/07/2022


//ESERCIZIO I

int find_two_occurrences(int A[],int N)
{
    int cont=1;
    int max=0;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(A[i]==A[j])
            {
                cont++;
            }
        }
        if(cont==2)
        {
            max++;
        }
        cont=1;
    }
    return max;
}


//Pre condition: A non vouto, N=N-1,i=0,max=0

int find_two(int A[],int N,int i,int max)
{
    if(N==i)
    {
        return max;
    }
    else
    {
        if(N!=i)
        {
        if(A[i]==A[N])
        {
            cont++;
        }
        return find_two(A,N,i++,cont)
        }
        if(cont==2)
        {
        return find_two(A,N--,0,max+1)
        }
        else
        return find_two(A,N--,0,max);
    }
}



//ESERCIZIO II

struct gelato
{
    char nome[DIM];
    char magazzino[DIM];
    int prezzo;
    bool vegano;
    gelato* next;
};

typedef gelato* p_gelato;

p_gelato only_vegan(p_gelato head)
{
    p_gelato temp=NULL;
    while(head!=NULL)
    {
        if(head->vegano==true)
        {
            temp=insert(temp,head->nome,head->magazzino,head->prezzo);
        }
        head=head->next;
    }
    return temp;
}


p_gelato insert(p_gelato temp,char nome,char magazzino, int prezzo)
{
    p_gelato nuovo=new gelato;
    strcpy(nuovo->nome,nome);
    strcpy(nuovo->magazzino,magazzino);
    nuovo->prezzo=prezzo
    nuovo->vegano=true;
    if(temp==NULL)
    {
        nuovo->next=temp;
        temp=nuovo;
    }
    else
    {
        p_gelato curr=temp;
        p_gelato prec=NULL;
        bool found=false;
        while(curr!=NULL && !found)
        {
            if(curr->prezzo>nuovo->prezzo)
            {
                found=true;
                if(curr==NULL)
                {
                    nuovo->next=temp;
                    temp=nuovo;
                }
                else
                {
                    prec->next=nuovo;
                    nuovo->next=NULL;
                }
            }
            else
            prec=curr;
            curr=curr->next;
        }
        if(!found)
        {
            prec->next=nuovo
            nuovo->next=NULL;
        }
    }
    return temp;
}


int trova_magazzino(p_gelato head,char magazzino[])
{
    int somma=0;
    if(head==NULL)
    {
        return somma;
    }
    else
    {
        while(head!=NULL)
        {
            if(strcmp(head->magazzino,magazzino)==0)
            {
                somma++;
            }
            head=head->next;
        }
        return somma;
    }
}







//ESERCIZIO III

#define N_PRODOTTI 100

struct prodotto
{
    int codice;
    float prezzo;
};


class Negozio 
{
    protected:
    float ricavi=0;
    prodotto A[N_PRODOTTI];
    int N;
    public:
    Negozio(int N,prodotto array[])
    {
        if(N>N_PRODOTTI)
        {
            this->N=N_PRODOTTI;
        }
        else
        this->N=N;
        for(int i=0;i<N;i++)
        {
            A[i].codice=array[i].codice;
            A[i].prezzo=array[i].prezzo;
        }
    }
    float calcola_prezzo(int codice,int quantita)
    {
        float prezzo=0;
        for(int i=0;i<N;i++)
        {
            if(A[i].codice=codice)
            {
               prezzo=A[i].prezzo*quantita; 
            }
        }
        return prezzo;
    }
    float scontrino(int codici[],int quantita[])
    {
        int x=0;
        for(int i=0;i<N;i++)
        {
            if(A[i].codice==codici[i])
            {
                x=x+calcola_prezzo(codice[i],quantita[i])
            }
        }
        this->ricavi=ricavi+x;
        return x;
    }
}


struct sconto
{
   int codice;
   int f_percentuale;
};



class Outlet:public Negozio
{
    protected:
    sconto B[N_PRODOTTI];
    public:
    Outlet(sconto auxiliar[],int N,prodotto array[]):Negozio(N,array)
    {
        for(int i=0;i<N;i++)
        {
            B[i].codice=auxiliar[i].codice;
            B[i].f_percentuale=auxiliar[i].f_percentuale;
        }
    }
    float calcola_prezzo(int codice,int quantita)
    {
        float prezzo=Negozio::calcola_prezzo(codice,quantita);
        if(quantita<3)
        {
        int x=trova_sconto(codice);
        prezzo=prezzo-(prezzo*x/100);
        return prezzo;
        }
        else
        {
           return calcola_prezzo(codice,quantita/3*2);
        }
    }
    int trova_sconto(int codice)
    {
        int x;
        bool check=false;
        for(int i=0;i<N && !check;i++)
        {
            if(B[i].codice==codice)
            {
                x=B[i].f_percentuale;
                check=true;
            }
        }
        return x;
    }
    float scontrino(int codici[],int quantita[])
    {
        float prezzo;
        for(int i=0;i<N;i++)
        {
            if(codice[i]==B[i].codice)
            {
                prezzo=prezzo+calcola_prezzo(codice[i],quantita[i]);
            }
        }
        ricavi=ricavi+prezzo;
        return prezzo;
    }
}