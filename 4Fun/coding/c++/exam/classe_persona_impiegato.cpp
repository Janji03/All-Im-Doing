#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;


/*definire una classe persona con campi opportuni, un
costruttore e metodo presentati. Definire una sottoclasse
impiegato con in più campi reparto e stipendio, un
metodo presentati opportunamente modificato e un
metodo aumento che aumenta lo stipendio del 5%.*/



class persona
{
    protected:
    char nome[DIM];
    char cognome[DIM];
    int eta;
    public:
   void make(char nome[],char cognome[],int eta)
    {
        strcpy(this->nome,nome);
        strcpy(this->nome,cognome);
        this->eta=eta;
    }
    void presentati()
    {
        cout<<nome<<endl;
        cout<<cognome<<endl;
        cout<<eta<<endl;
    }
};

class impiegato: public persona{
    protected:
    char reparto;
    int stipendio;
    public:
    void make1(char reparto,int stipendio)
    {
        this->reparto=reparto;
        this->stipendio=stipendio;
    }
    void presentati_1()
    {
        persona::presentati();
        cout<<reparto<<endl;
        cout<<stipendio<<endl;
    }
    void aumento()
    {
        int temp;
        temp=(stipendio*5)/100;
        stipendio=stipendio+temp;
    }

};


