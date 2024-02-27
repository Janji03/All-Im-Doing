#include <iostream>
#include <cstring>
#define DIM 100
#define KIARO 100
using namespace std;


struct musica
{
    char genere[KIARO];
    char aritsta_pref[KIARO];
    bool spotify_cracked;
    bool cassa;

};

struct lingue
{
    int numero;
    char quali[KIARO];
};

class Marocchino
{
    protected:
    char nazionalità[KIARO];
    int rimorchio;
    int lingue;
    int voto_stile;
    int street_credibility;
    int soldi;
    char taglio[KIARO];
    bool tuta;
    bool is_smoker;
    bool is_pusher;
    public:


};


struct armi
{
    int n_coltelli;
    bool bang_bang; //GLS  cosa vuol dire kiaro

};


class Marocchino_Plus /*aka MARANZA*/: public Marocchino
{
    protected:
    bool paga_biglietto //kiaro false
    bool tech;
    bool TN;
    char borsello[KIARO];
    musica array[KIARO];
    armi A[KIARO];
    lingue B[KIARO];
    public:
};



class baby_maranza:public Marocchino_plus
{
    protected:
    int eta;
    bool mangia_pasta;
    int quanti_membri;
    
};


