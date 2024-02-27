#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;

//ESAME 16/09/2022


//ESERCIZIO I


int found_indice(int A[],int N)
{
    int max=0;
    int temp=1;
    int temp1,x;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(A[i]==A[j])
            {
                temp++;
                temp1=j;
            }
        }
        if(temp>max)
        {
            max=temp;
            x=temp1;
        }
        temp=1;
    }
    return x;
}


//ESERCIZIO II


struct alunno
{
    char nome[DIM];
    char cognome[DIM];
    int giorno;
    int mese;
    int anno;
    char luogo[DIM];
    alunno* next;
};


typedef alunno* p_alunno;


p_alunno remove_mese(p_alunno head, int mese)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        p_alunno curr=head;
        p_alunno prec=curr;
        while(curr!=NULL)
        {
            if(curr->mese==mese)
            {
            if(curr==head)
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
            }
            else
            prec=curr;
            curr=curr->next;
        }
        return head;
    }
}



int mesi_piu_nati(p_alunno head,int max)//max=0
{
    if(head==NULL)
    {
        return max;
    }
    else
    {
        p_alunno temp=head;
        int x=temp->mese;
        int cont=1;
        int max=0;
        while(temp->next!=NULL)
        {
            if(temp->mese==x)
            {
                cont++;
            }
            temp=temp->next;
        }
        if(cont>max)
        {
        return mesi_piu_nati(head->next,cont);
        }
        else
        return mesi_piu_nati(head->next,max);
    }
}

//ESERCIZIO III

#define N_LIBRI 10

struct libro
{
    char titolo[DIM];
    int prezzo;
};


class Libreria
{
    protected:
    libro A[N_LIBRI];
    int N;
    public:
    Libreria(int N,libro B[])
    {
        if(N>N_LIBRI)
        {
            this->N=N_LIBRI;
        }
        else
        this->N=N;
        for(int i=0;i<N;i++)
        {
            A[i].prezzo=B[i].prezzo;
            strcpy(A[i].titolo,B[i].titolo);
        }
    }
    int cerca_libro(char nome[])
    {
        int x;
        bool found=false;
        for(int i=0;i<N && !found;i++)
        {
            if(strcmp(A[i].titolo,nome)==0)
            {
                found==true;
                x=i;
            }
        }
        return x;
    }
    int prezzo_libro(char nome[])
    {
        int prezzo=0;
        bool found=false;
        for(int i=0;i<N && !found;i++)
        {
            if(strcmp(A[i].titolo,nome)==0)
            {
                prezzo=A[i].prezzo;
                found=true;
            }
        }
        return prezzo;
    }  
};


class LibreriaCafe: public Libreria
{
    protected:
    int f_percentuale;
    public:
    LibreriaCafe(int f_percentuale,int N,libro B[]):Libreria(N,B)
    {
        if(f_percentuale<1 || f_percentuale>100)
        {
            this->f_percentuale=50;
        }
        else
        this->f_percentuale=f_percentuale;
    }
    int prezzo_libro(char nome[])
    {
        int prezzo=Libreria::prezzo_libro(nome);
        return prezzo*f_percentuale/100;
    }
};

struct audio_libro
{
    char narratore[DIM];
    float costo_minuto;
    int durata;
};



class Libreria_Online:public Libreria
{
    protected:
    audio_libro B[N_LIBRI];
    public:
    Libreria_Online(audio_libro array[],int N,libro B[]):Libreria(N,B)
    {
        for(int i=0;i<N;i++)
        {
            strcpy(B[i].narratore,array[i].narratore);
            B[i].costo_minuto=array[i].costo_minuto;
            B[i].durata=array[i].durata;
        }
    }
    int prezzo_libro(char nome[])
    {
       int i=Libreria::cerca_libro(nome);
       return Libreria::prezzo_libro(nome)+(B[i].costo_minuto*B[i].durata);
    }
};