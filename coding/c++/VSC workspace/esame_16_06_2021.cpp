#include <iostream>
#include <cmath>
#include <ctime>
#define DIM 10
using namespace std;


//ESAME 16/06/2021


//ESERCIZIO I


//ESERCIZIO II


struct portata
{
    char nome[DIM];
    char tipo[DIM];
    int prezzo;
    portata* next;
};


typedef portata* p_portata;


int prezzo(p_portata head,char nome)
{
    int prezzo=0;
    bool check=false;
    if(head==NULL)
    {
        return prezzo;
    }
    else
    {
        p_portata temp=head;
        while(temp->next!=NULL && !check)
        {
            if(strcmp(temp->nome,nome)==0)
            {
                prezzo=temp->prezzo;
            }
        }
        return prezzo;
    }
}

p_portata nuovo_menu(p_portata head, int prezzo)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        p_portata temp=head;
        p_portata to_return=NULL;
        while(temp->next!=NULL)
        {
            if(temp->prezzo>prezzo && strcmp(temp->tipo,"antipasto")==0)
            {
                p_portata x=new portata;
                x=temp;
                x=x->next;
            }
            temp=temp->next;
        }
         to_return=x;
        p_portata temp1=head;
        while(temp1->next!=NULL)
        {
            if(temp1->prezzo>prezzo && strcmp(temp1->tipo,"primo")==0)
            {
                x=temp1;
                x=x->next;
            }
            temp1=temp1->next;
        }
        p_portata temp2=head;
        while(temp2->next!=NULL)
        {
            if(temp2->prezzo>prezzo && strcmp(temp1->tipo,"secondo")==0)
            {
                x=temp2;
                x=x->next;
            }
            temp2=temp2->next;
        }
         p_portata temp3=head;
        while(temp3->next!=NULL)
        {
            if(temp3->prezzo>prezzo && strcmp(temp3->tipo,"dolce")==0)
            {
                x=temp3;
                x=x->next;
            }
            temp3=temp3->next;
        }
        return to_return;
    }
}


//ESERCIZIO III


class RCA
{
    protected:
    int rischio;
    float costo_base;
    float polizza;
    float servizi[3];
    int N=0;
    public:
    RCA(int rischio,float costo_base,int N,float s[])
    {
        if(rischio<1 && rischio>14)
        {
            this->rischio=1;
        }
        else
        this->rischio=rischio;
        if(costo_base<0)
        {
            this->costo_base=0;
        }
        else
        this->costo_base=costo_base;
        this->polizza=this->costo_base*this->rischio;
        if(N<0 || N>3)
        {
            this->N=0;
        }
        else
        this->N=N;
        for(int i=0;i<N;i++)
        {
            servizi[i]=s[i];
        }
    }
    float costo_servizi()
    {
        float costo=0;
        for(int i=0;i<N;i++)
        {
            costo=costo+servizi[i];
        }
        return costo;
    }
    bool aggiungi_servizi(float costo)
    {
        if(N>0 || N<3)
        {
            servizi[N]=costo;
            N++;
            return true;
        }
        else
        return false;
    }
    float costo_totale()
    {
        float c;
        c=polizza;
        return c+costo_servizi();
        
    }
};


class RCA_KM:public RCA
{
    protected:
    int f_percentuale;
    int soglia=10; 
    int km=0;
    int costo_km=10;
    public:
    RCA_KM(int f_percentuale,int rischio,float costo_base,int N,float s[]):RCA(rischio,costo_base,N,s)
    {
        if(f->percentuale<0 || f_percentuale>100)
        {
            this->f_percentuale=50;
        }
        else
        this->f_percentuale=f_percentuale; 
    }
    void aggiungi_km(int x)
    {
       if(x<0)
       {
        cout<<"errore"<<endl;
       } 
       else
       km=km+x;
    }
    float calcola_costo()
    {
        float c;
        c=RCA::costo_totale();
        c=c-(c*f_percentuale/100);
        if(km>soglia)
        {
            km=km-soglia;
            c=c+(km*costo_km);
        }
        else
        return c;
    }
}

