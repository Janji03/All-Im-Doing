#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#define NUMERO_SALE 5
#define N_RISTORANTI 5
using namespace std;

//struttura sala definita fuori dalla classe
// 3 campi

struct sala
{
    int n_posti_disponibili;
    int n_posti_prenotati;
    bool is3D;
};


//precondition: numero sale disponibili è 5
//classe multisala
//protected:array di tipo sala che contiene delle strutture sala
//protected: 


class Multisala
{
    protected:
    sala array[NUMERO_SALE];
    int prezzo;
    int incremento_3D;
    int N;
    public:
    Multisala(int prezzo,int incremento_3D,int N, sala array[],bool is3D[],int n_posti_disponibili[])
    {
        this->prezzo=prezzo;
        this->incremento_3D=incremento_3D;
        if(N>NUMERO_SALE)
        {
            this->N=NUMERO_SALE;
        }
        else
        {
            this->N=N;
        }
        for(int i=0; i<this->N;i++)
        {
            this->array[i].n_posti_prenotati=0;
            this->array[i].n_posti_prenotati=n_posti_disponibili[i];
            this->array[i].is3D=is3D[i];
        }
    }
    void prenota_posto(int k)
    {
        if(k>NUMERO_SALE)
        {
            cout<<"out of bound"<<endl;
        }
        else
        {
           if(array[k].n_posti_disponibili>0)
           {
            array[k].n_posti_disponibili--;
            array[k].n_posti_prenotati++;
           }
        }
    }
    int conta_biglietti(bool k)
    {
        if(k)
        {
            int somma=0;
            for(int i=0;i<N;i++)
            {
                if(array[i].is3D==false)
                {
                    somma=somma+array[i].n_posti_prenotati;
                }
            }
            return somma;
        }
        else
        {
            int somma=0;
            for(int i=0;i<N;i++)
            {
                if(array[i].is3D==true)
                {
                    somma=somma+array[i].n_posti_prenotati;
                }
            }
            return somma;
        }
    }
    int incasso_totale()
    {
        int tot=0;
        tot=prezzo* conta_biglietti(false);
        int tot3D;
        tot=(prezzo+incremento_3D)*conta_biglietti(true);
        return tot+tot3D;
    }

};

struct ristorante
{
    int n_consumazioni;
    int prezzo;
};

class multisala_plus:public Multisala
{
    protected:
    ristorante A[N_RISTORANTI];
    int N;
    public:
    multisala_plus(int prezzo,int consumazioni[],int prezzo,int incremento_3D,int N, sala array[],bool is3D[],int n_posti_disponibili[]):Multisala(prezzo,incremento_3D, N,  array, is3D, n_posti_disponibili)
    {
        if(N>N_RISTORANTI)
        {
            this->N=N_RISTORANTI;
        }
        else
        {
            this->N=N;
        }
        for(int i=0;i<this->N;i++)
        {
            this->A[i].n_consumazioni=consumazioni[i];
            this->A[i].prezzo=prezzo;
        }
    }
    int calcolo_incasso_tot()
    {
        int tot;
        for(int i=0;i<this->N;i++)
        {
            tot=tot+A[i].n_consumazioni*A[i].prezzo;
        }
        return tot+Multisala::incasso_totale();
    }
    
};
