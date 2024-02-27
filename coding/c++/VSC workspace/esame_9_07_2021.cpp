#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#define DIM 10
using namespace std;

//esame 9/07/2021

//ESERCIZIO I

void ordina_array(int A[],int N)
{
    int i=0;
    while(i<N)
    {
        if(i%2==0)
        {
        if(A[i]%2==0 && A[i+1]%2!=0)
        {
            i++;
        }
        else
        {
            int temp;
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            i++;
        }
        }
        else
        {
            if(A[i]%2!=0 && A[i+1]%2==0)
            {
                i++;
            }
            else
            {
            int temp;
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            i++;
            }
        }
    }
    i=0;
    while(i<N)
    {
        int j=i+2;
        while(j<N)
        {
            if(A[i]<A[j])
            {
                int temp1;
                temp1=A[i];
                A[i]=A[j];
                A[j]=temp1;
            }
            j=j+2;
        }
        i=i+2;
    }
    i=1;
    while(i<N)
    {
        int j=i+2;
        while(j<N)
        {
            if(A[i]>A[j])
            {
                int temp1;
                temp1=A[i];
                A[i]=A[j];
                A[j]=temp1;
            }
            j=j+2;
        }
        i=i+2;
    } 
}

//ESERCIZIO II

struct vacanza
{
    char tipo[DIM];
    float prezzo;
    int giorni;
    vacanza* next;
};

typedef vacanza* p_vacanza;


p_vacanza nuova_vacanza(p_vacanza head,char tipo)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        int min=0;
        p_vacanza temp=head;
        p_vacanza to_return=new vacanza;
        while(temp->next!=NULL)
        {
            if(strcmp(temp->tipo,tipo)==0)
            {
                if(temp->prezzo<min)
                {
                    min=temp->prezzo;
                    to_return=temp;
                    to_return=to_return->next;
                    temp=temp->next;
                }
                else
                to_return->next=temp;
                to_return=to_return->next;
            }
        }
        return to_return;
    }
}


void find_tipo(p_vacanza head, char winner[],int days)
{
    if(head==NULL)
    {
        cout<<"nessuna vacanza disponibile"<<endl;
    }
    else
    {
        strcpy(winner,"non ci sono vacanze per i giorni inseriti");
        p_vacanza temp=head;
        p_vacanza temp1=head;
        int min;
        bool check=true;
        while(temp1->next!=NULL && check)
        {
            if(temp1->giorni>days)
            {
                temp1->prezzo=min;
            }
        }
        while(temp->next!=NULL)
        {
            if(temp->giorni>days && temp->prezzo=<min)
            {
                strcpy(winner,temp->tipo);
            }
            else
            temp=temp->next;
        }
    }
}


//ESERCIZIO III

struct rifornimento
{
    char nome[DIM];
    int litri;
    int max_litri;
};

class Self
{
    protected:
    rifornimento array[2];
    public:
    Self(int litri_max_b,int litri_max_d)
    {
       
        strcpy(array[0].nome,"Benzina");
        array[0].litri=0;
        if(litri_max_b<0)
        {
            array[0].max_litri=100;
        }
        else
        array[0].max_litri=litri_max_b;
        strcpy(array[1].nome,"Diesel");
        array[1].litri=0;
        if(litri_max_d<0)
        {
        array[1].max_litri=0;
        }
        else
        array[1].max_litri=litri_max_d;
    }
    bool aggiungi_litri(int l,char tipo[])
    {
        if(strcmp(tipo,array[0].nome)==0)
        {
            if(array[0].max_litri-array[0].litri>l)
            {
                array[0].litri=array[0].litri+l;
                return true;
            }
        }
        else
        if(strcmp(tipo,array[1].nome)==0)
        {
             if(array[1].max_litri-array[1].litri>l)
            {
                array[1].litri=array[1].litri+l;
                return true;
            }
        }
        else
        return false;
    }
    bool decrementa_litri(int l,char tipo[])
    {
        if(strcmp(tipo,array[0].nome)==0)
        {
            if(array[0].litri-l>=0)
            {
                array[0].litri=array[0].litri-l;
                return true;
            }
        }
        else
        if(strcmp(tipo,array[1].nome)==0)
        {
            if(array[1].litri-l>=0)
            {
                array[1].litri=array[1].litri-l;
                return true;
            }
        }
        else 
        return false;
    }
};



class Servito:public Self
{
    protected:
    rifornimento array[3];
    public:
    Servito(int max_litri_m,int litri_max_b,int litri_max_d):Self(litri_max_b,litri_max_d)
    {
        strcpy(array[2].nome,"Benzina");
        array[2].litri=0;
        if(litri_max_b<0)
        {
            array[2].max_litri=100;
        }
        else
        array[2].max_litri=litri_max_m;
    }
    bool aggiungi_litri(int l,char tipo[])
    {
        bool x;
        x=Self::aggiungi_litri(l,tipo);
        if(x)
        {
            return true;
        }
        else
        if(strcmp(tipo,array[2].nome)==0)
        {
             if(array[2].max_litri-array[2].litri>l)
            {
                array[2].litri=array[2].litri+l;
                return true;
            }
        }
        else
        return false;
    }
    bool decrementa_litri(int l,char tipo[])
    {
        bool x;
        x=Self::aggiungi_litri(l,tipo);
        if(x)
        {
            return true;
        }
        else
        if(strcmp(tipo,array[2].nome)==0)
        {
            if(array[2].litri-l>=0)
            {
                array[2].litri=array[2].litri-l;
                return true;
            }
        }
        else 
        return false;
    }
};