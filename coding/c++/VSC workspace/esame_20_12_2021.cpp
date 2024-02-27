#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;

//esame 20_12_2021

//ESERCIZIO I

bool there_are_prime(int A[],int N) //N parte da N-1
{
    if(N==0)
    {
        return true;
    }
    else
    {
        bool check;
        check=check_prime(A[N]);
        if(!check)
        {
            return false;
        }
        else
        return there_are_prime(A,N-1);
    }
}


bool check_prime(int n,int i)//i=2
{
    if(i==n/2)
    {
        return true;
    }
    else
    if(n%i==0)
    {
        return false;
    }
    else
    return check_prime(n,i++);
}


//ESERCIZIO II


struct tavolo
{
    int persone;
    double orario;
    bool dove;
    tavolo* next;
};

typedef tavolo* p_tavolo;

p_tavolo prenota_tavolo(p_tavolo head,int persone,double orario)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        bool found=false;
        p_tavolo curr=head;
        p_tavolo prec=curr;
        while(curr!=NULL && !found)
        {
            if(curr->persone==persone && curr->orario==orario)
            {
                if(head==curr)
                {
                    head=head->next;
                    delete curr;
                    curr=head;
                    prec=curr;
                    found=true;
                }
                else
                {
                    prec->next=curr->next;
                    delete curr;
                    curr=prec->next;
                    found=true;
                }
            }
        }
        return head;
    }
}


double quale_orario(p_tavolo head,int persone,bool dove)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        p_tavolo temp=head;
        double orario=0;
        bool check=false;
        while(temp->next!=NULL)
        {
            if(temp->persone==persone && temp->dove==dove)
            {
                orario=temp->orario;
                check=true;
            }
        }
        if(orario!=0)
        {
            return orario;
        }
        else
        {
            while(temp->next!=NULL)
            {
            if(temp->persone>persone && temp->dove==dove)
            {
                orario=temp->orario;
                check=true;
            }
            }
            return orario;
        }
    }
}


int quanti_tavoli(p_tavolo head,bool x)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        int cont=0;
        p_tavolo temp;
        while(temp->next!=NULL)
        {
            if(temp->dove==x)
            {
                cont++;
            }
        }
        return cont;
    }
}


//ESERCIZIO III
#define P_DISPONIBILI 5

struct prodotto
{
    int codice;
    char nome[DIM];
    int quanto;
};

class Magazzino
{
    protected:
    prodotto A[P_DISPONIBILI];
    int N;
    protected:
    Magazino(int N,prodotto carica[])
    {
        if(N>0 && N<=P_DISPONIBILI)
        {
            this->N=N;
        }
        else
        this->N=P_DISPONIBILI;
        for(int i=0;i<N;i++)
        {
            A[i].codice=carica[i].codice;
            A[i].quanto=carica[i].quanto;
            strcpy(A[i].nome,carica[i].nome);
        }
    }

    int decrementa_possibilità(int codice,int quantità)
    {
        int c=-1;
        bool check=false;
        for(int i=0;i<N && !check;i++)
        {
            if(A[i].codice==codice && A[i].quanto>=quantità)
            {
                c=i;
                A[i].quanto=A[i].quanto-quantità;
                check=true;
            }
        }
        return c;
    }
};


class Magazzino_Plus:public Magazzino
{
    protected:
    int soglia=10;
    int approvigionamenti;
    public:
    Magazzino_Plus(int approvigionamenti,int N,prodotto carica[]):Magazzino(N,carica)
    {
        if(approvigionamenti<0)
        {
            this->approvigionamenti=0;
        }
        else
        this->approvigionamenti=approvigionamenti;
    }
    int decrementa_possibilità(int codice,int quantità)
    {
        int c=Magazzino::decrementa_possibilità(codice,quantità);
        if(c==-1)
        {
            return -1;
        }
        else
        {
           if(A[c].quanto<soglia)
           {
            approvigionamenti++;
           }
            return c;
        }
    }
    void da_approvigionare(int B[])
    {
        int j=0;
        for(int i=0;i<N;i++)
        {
            if(A[i].quanto<soglia)
            {
                B[j]=A[i].codice;
                j++;
            }
        }
    }
    void aggiorna_disponibilità(int C[],int Q[],int l)
    {
        
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<l;j++)
            {
                if(C[j]==A[i].codice)
                {
                    A[i].quanto=A[i].quanto+Q[i];
                }
            }
        }
        
    }
};


