#include <iostream>
#include <cmath>
#include <cstring>
#define DIM 10
using namespace std;


//classe che definisce un biglietto urbano
//protected: nome del mezzo di trasporto, prezzo del biglietto
//public:costruttore, calcolo prezzo


class biglietto_urbano
{
    protected:
    char nome[DIM];
    int prezzo;
    public:
    biglietto_urbano(int prezzo,char nome[])
    {
        this->prezzo=prezzo;
        strcpy(this->nome,nome);
    }
    int calcola_prezzo()
    {
        return prezzo;
    }
};

//sottoclasse di biglietto_urbano
//protected: prezzo per kilometri percorsi,distanza kilometri percorsi
//public: costruttore(chiama il costruttore della classe biglietto urbano)
//public: calcolo prezzo(ritorna la somma tra il prezzo base (della classe biglietto urbano) e il prezzo_km)
//public: calcolo distanza


class biglietto_extra_urbano: public biglietto_urbano
{
    protected:
    int prezzo_km;
    int distanza;
    public:
    biglietto_extra_urbano(int prezzo,int nome[],int prezzo_km,int distanza):biglietto_urbano(prezzo,nome)
    {
        this->prezzo_km=prezzo_km;
        this->distanza=distanza;
    }
    int calcola_prezzo_extra_urbano()
    {
        return prezzo_km+biglietto_urbano::calcola_prezzo();
    }
    int calcola_distanza_extra_urbano()
    {
        return distanza;
    }

};

//sotto-classe biglietto nazionale
//protected: prezzo km mezzi di trasporto ad alta velocità
//protected: distanza percorsa da mezzi ad alta velocità
//public: costruttore (chiama il costruttore della sottoclasse precedente(biglietto extra urbano))
//public:calcolo prezzo(chiama la funzione di calcolo della classe precedente)
//public:calcolo distanza mezzi ad alta velocità(chiama la funzione distanza della classe precedente)


class biglietto_nazionale:public biglietto_urbano
{
    protected:
    int prezzo_km_hs;
    int distanza_hs;
    public:
    biglietto_nazionale(int prezzo,int nome[],int prezzo_km,int distanza,int prezzo_km_hs,int distanza_hs):biglietto_extra_urbano(prezzo_km,distanza)
    {
        this->prezzo_km_hs=prezzo_km_hs;
        this->distanza_hs=distanza_hs;
    }
    int calcola_prezzo_nazionale()
    {
        return prezzo_km_hs+(biglietto_extra_urbano::calcola_prezzo_extra_urbano());
    }
    int calcola_distanza_hs()
    {
        return distanza_hs+(biglietto_extra_urbano::calcola_distanza_extra_urbano());
    }
};

