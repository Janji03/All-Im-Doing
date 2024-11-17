#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;

class Automobile
{
    protected:
    char modello[DIM];
    int consumo;
    public:
    Automobile(char modello[])
    {
        strcpy(this->modello,modello);
    }
    int calcolo_consumo(int distanza_km)
    {
        
    }

};


class benzina:public Automobile
{
    protected:
    int capacità_serbatoio;
    public:
    benzina(int capacità_serbatoio):Automobile(modello)
    {
        this->capacità_serbatoio=capacità_serbatoio;
    }
};

class ibrida:public benzina
{
    protected:
    int capacità_serbatoio;
    double fattore_risparmio;
    public:
    ibrida(int capacità_serbatoio,double risparmio):benzina(modello)
    {
        this->capacità_serbatoio=capacità_serbatoio;
        this->fattore_risparmio=fattore_risparmio; //variabile espressa in precentuale 
    }
};


class elettrica: public Automobile
{
    protected:
    int batteria;
    public:
    elettrica(int batteria):Automobile(modello)
    {
        this->batteria=batteria;
    }
}