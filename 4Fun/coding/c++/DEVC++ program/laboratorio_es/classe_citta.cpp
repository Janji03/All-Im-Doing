#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;


class citta{
    protected:
    char nome[DIM];
    int abitanti;
    public:
    citta(char nome[DIM],int abitanti)
    {
        strcpy(this->nome,nome);
        this->abitanti=abitanti;
    }
    void get_citta()
    {
        cout<<nome<<endl;
        cout<<abitanti<<endl;
    }
    void cambia_abitanti(int n)
    {
        abitanti=n;
    }
};


class capoluogo:public citta{
    protected:
    char regione[DIM];
    public:
    capoluogo(char regione[DIM])
    {
        citta::citta();
        strcpy(this->regione,regione);
    }
    void get_capoluogo()
    {
        cout<<regione;
        citta::get_citta();
    }

};

class capitale:public capoluogo
{
    protected:
    char nazione[DIM];
    public:
    capitale(char nazione[])
    {
        capoluogo::capoluogo();
        strcpy(this->nazione,nazione);
    }
    void get_capitale()
    {
        cout<<nazione;
        capoluogo::get_capoluogo();
    }
};