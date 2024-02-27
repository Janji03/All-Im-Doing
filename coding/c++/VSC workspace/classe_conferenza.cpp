#include <iostream>
#include <cstring>
#define DIM 10
#define N_INCONTRI 5
using namespace std;

struct incontro
{
    char nome[DIM];
    char titolo[DIM];
    int orario;
};


class Conferenza
{
    protected:
    int inizio;
    int fine;
    int pranzo;
    incontro array[N_INCONTRI];
    int N;
    public:
    Conferenza(int inizio,int fine, int pranzo)
    {
        this->inizio=inizio;
        this->fine=fine;
        this->pranzo=pranzo;
        this->N=0;
    }
    int slot_disponibili()
    {
        int cont=0;
       for(int i=0;i<this->N;i++)
       {
           if(array[i].orario==0)
           {
            cont++;
           }
       }
       return cont;
    }
    bool controlla_orario(int n)
    {
        if(n<=fine && n>=inizio && n!=pranzo)
        {
        return true;
        }
        else
        return false;
    }
    bool controllo_slot(int n)
    {
        for(int i=0;i<N;i++)
        {
            if(A[i].orario==n)
            {
            return false;
            }
        }
        return true;
    }
    void aggiungi_incontro(char nome[],char titolo[],int orario)
    {
        if(controlla_orario(orario)==true && controllo_slot(orario)==true)
        {
            array[this->N].orario=orario;
            strcpy(array[this->N].titolo,titolo);
            strcpy(array[this->N].nome,nome);
            this->N++;
        }
    }

};


class Conferenzapremium:public Conferenza
{
    protected:
    int orario_poster;
    public:
    Conferenzapremium(int orario_poster,int inizio,int fine,int pranzo):Conferenza(inizio,fine,pranzo)
    {
        this->orario_poster=orario_poster;
    }
    int slot_disponibili()
    {
        int x;
        x=Conferenza::slot_disponibili();
        if(orario_poster==0)
        {
            return x;
        }
        else
        return x--;
    }
    bool controlla_orario(int n)
    {
        bool x;
        x=Conferenza::controlla_orario(n);
        if(x==true && orario_poster!=n)
        {
            return true;
        }
        else
        return false;
    }
    bool controlla_slot(int n)
    {
        bool x;
        x=Conferenza::controllo_slot(n);
        if(x==true && orario_poster!=n)
        {
            return true;
        }
        else
        return false;
    }
    bool aggiungi_incontro(char nome[],char titolo[],int orario)
    {
        if(controlla_orario(orario)==true && controlla_slot(orario)==true)
        {
            array[this->N].orario=orario;
            strcpy(array[this->N].titolo,titolo);
            strcpy(array[this->N].nome,nome);
            this->N++;  
        }
    }
};