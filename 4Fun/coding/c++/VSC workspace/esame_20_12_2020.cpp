#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#define DIM 100
using namespace std;

//ESAME 17/12/2020

//ESERCIZIO 1



//precondition:array non vuoto con elementi positivi
//N=N-1;
//i=0
void ordina_array(int A[],int N,int i)
{
    if(N!=i)
    {
        if(i%2!=0)
        {
            int temp;
            temp=A[i];
            A[i]=A[N];
            return ordina_array(A,N-1,i);
        }
        else
        return ordina_array(A,N,i++);
    }
}

//ESERCIZIO 2

struct regalo
{
    char nome[DIM];
    char destinatario[DIM];
    int prezzo;
    regalo* next;

};


typedef regalo* p_regalo;

p_regalo insert_regalo(p_regalo head, char nome, char destinatario[],int prezzo)
{
    p_regalo temp=new regalo;
    strcpy(temp->nome,nome);
    strcpy(temp->destinatario,destinatario);
    temp->prezzo=prezzo;
    temp->next=head;
    head=temp
    return head;
}

p_regalo remove(p_regalo head,char nome[])
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        p_regalo curr=head;
        p_regalo prec=curr;
        while(curr->next!=NULL)
        {
            if(strcmp(curr->nome,nome)==0)
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


int somma_regali(p_regalo head, char destinatario)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        int somma=0;
        p_regalo temp=head;
        while(temp->next!=NULL)
        {
            if(strcmp(temp->destinatario,destinatario)==0)
            {
                somma=somma+temp->prezzo;
            }
            else
            temp=temp->next;
        }
        return somma;
    }
}


//ESERCIZIO 3

class Automobile
{
    protected:
    char modello[DIM];
    int consumi;
    int capacità;
    public:
    Automobile(char modello[]="",int consumi=0,int capacità)
    {
        this->capacità=capacità;
        this->consumi=consumi;
        strcpy(this->modello,modello);
    }
    float calcola_consumi(int distanza)
    {
        return consumi/100*distanza;
    }
    float calcola_costo(int distanza,int costo)
    {
        return calcolo_consumi(distanza)*costo;
    }
    float autonomia()
    {
        return capacità/consumi;
    }
}


class Benzina: public Automobile
{
    protected:
    public:
    Benzina(int capacità,char modello[],int consumi):Automobile(capacità,modello,consumi)
    {

    }
    float calcola_consumi(int distanza)
    {
        return Automobile::calcola_consumi(distanza);
    }
    float calcola_costo(int distanza,int costo)
    {
       return Automobile::calcola_costo(distanza,costo);
    }
    float autonomia()
    {
        Automobile::autonomia();
    }

}


class Ibrida: public Automobile
{
    protected:
    float f_risparmio;
    public:
    Ibrida(int capacità,float f_risparmio,char modello[],int consumi):Automobile(modello,consumi)
    {
        this->f_risparmio=f_risparmio;
    }
    float calcola_consumi(int distanza)
    {
        float x=Automobile::calcola_consumi(distanza);
        return x-(x*f_risparmio);
        
    }
    float calcola_costo(int distanza,int costo)
    {
        return calcola_consumi(distanza)*costo;
    }
    float autonomia()
    {
        Automobile::autonomia(); 
    }

}


class Elettrica:public Automobile
{
    protected:
    public:
    Elettrica(int capacità,char modello[],int consumi):Automobile(capacità,modello,consumi)
    {

    }
    float calcola_consumi(int distanza)
    {
        return Automobile::calcola_consumi(distanza);
    }
    float calcola_costo(int distanza,int costo)
    {
        return Automobile::calcola_costo(distanza,costo);
    }
    float autonomia()
    {
        Automobile::autonomia();
    }

}