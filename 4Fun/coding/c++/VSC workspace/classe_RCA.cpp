#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;

//classe RCA
//precondition:N<3 && N>0
//protected:

class RCA
{
    protected:
    int base;
    int rischio;
    int polizza;
    int N;
    float servizi[3];
    public:
    RCA(int base,int rischio,float servizi[],int N)
    {
        this->base=base;
        this->rischio=rischio;
        polizza=base*rischio;
        this->N=N;
        for(int i=0,i<N,i++)
        {
            this->servizi[i]=servizi[i];
        }
    }
    float costo_servizi()
    {
        float somma=0;
        for(int i=0;i<N,i++)
        {
            somma=somma+servizi[i];
        }
        return somma;
    }
    bool aggiungi_servizio(float n)
    {
        if(N==3)
        {
            return false;
        }
        else
        {
            N++;
            servizi[N-1]=n;
            return true;
        }
    }
    float calcola_costo()
    {
        float costo=0;
        costo=polizza;
        for(int i=0;i<N;i++)
        {
            costo=costo+servizio[i];
        }
        return costo;
    }
};

class RCA_KM:public RCA
{
    protected:
    float sconto;
    int km;
    int soglia;
    int eccesso;
    public:
    RCA_KM(float sconto,float km,int soglia,int eccesso):RCA(base,rischio)
    {
        this->sconto=sconto;
        this->km=km;
        this->soglia;
        this->eccesso;
        base=(base*sconto)/100;
    }
    void aggiungi_KM(int x)
    {
        km=km+x;
    }
    int calcolo_costo()
    {
       if(km<soglia)
       {
        polizza=base;
        return polizza;
       }
       else
       {
        polizza=base;
        int cont=km;
        while(cont>0)
        {
            polizza=polizza+eccesso;
            cont--;
        }
        return polizza;
       }
    }
};