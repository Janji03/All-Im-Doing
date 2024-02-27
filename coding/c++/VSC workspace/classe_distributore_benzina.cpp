#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;


struct rifornimento
{
    char nome[DIM];
    int litri;
    int max_litri;
};

typedef rifornimeto* p_rifornimento;


class Self
{
    protected:
    rifornimento a;
    public:
    self(char nome[]="",int litri=0,int max_litri=0)
    {
        if(strcmp(nome,"Benzina")==0 || strcmp(nome,"Diesel")==0)
        {
        a.this->litri=litri;
        a.this->max_litri=max_litri;
        strcpy(a.this->nome,nome);
        }

    }
    bool aggiungi_litri(char tipo[],int l)
    {
        if(strcmp(a.nome,tipo)==0 && l+a.litri<a.max_litri)
        {
            a.litri=a.litri+l;
            return true;
        }
        else
        return false;
       
    }

    bool decrementa_litri(char tipo[],int l)
    {
        if(strcmp(a.nome,tipo)==0 && a.litri>l)
        {
            a.litri=a.litri-l;
            return true;
        }
        else
        return false;
    }
};

class Servito:public Self
{
    public:
    Servito(char nome[]="",int litri=0,int max_litri=0):self(nome,litri,max_litri)
    {

    }
    bool aggiungi_litri(char tipo[],int l)
    {
        if(rifornimento::aggiungi_litri(tipo,l)==false)
        {
            if(strcmp(nome,a.nome)==0 && (a.litri+l<a.max_litri))
            {
                a.litri=a.litri+l;
                return true;
            }
        }
        else
        return false;
    }

    bool decrementa_litri(char tipo[],int l)
    {
        if(rifornimento::decrementa_litri(tipo.l)==false)
        {
            if(strcmp(a.nome,tipo)==0 && a.litri>l)
        {
            a.litri=a.litri-l;
            return true;
        }
        else
        return false;
        }
    }
}
