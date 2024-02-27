//lezione 13: classi
/*
classe: tipo di dato definito dai campi(ogetti,tipo di dati) e metodi(funzioni della classe)
la classe è composta da due parti: public e protected
public: contiene tutte le funzioni e i parametri modificabili
protected: contiene i parametri non modificabili (es costanti)

*/
#include <iostream>
#define pigreco 3.14
#include <cmath>
using namespace std;


//questa classe non permette all'utente di inserire il valore del raggio
//l'unico modo è modificare "manualmente" il campo r della classe


class cerchio{
    protected:
    int r=3;
    public:
    double area()
    {
        return r*r*(pigreco);
    }
    double crf()
    {
        return (2*pigreco*r);
    }
    
};

//base e altezza sono campi protetti quindi se inizializzati 
//avranno sempre lo stesso valore
//si usa una funzione make per creare il rettangolo(far inserire all'utente i valori di base e altezza)
//questa funzione prende in input due interi e attribuisce il loro valore ai campi
//protetti base e altezza

class rettangolo{
    protected:
    int base;
    int altezza;
    public:
    double perimetro()
    {
        return (base+altezza)*2;
    }
    double area()
    {
        return base*altezza;
    }
    void make(int m=1,int n=2)   //funzione che prende in input due interi e attribuisce i valori ai campi base,altezza (protected)
    {                         //questo tipo di funzione si chiama costruttore
        base=(m);
        altezza=(n);
    }

};

int main()
{
    cerchio c; //definisco una variabile di tipo cerchio
    cout<<c.area()<<endl; //chiamo le funzioni della classe cerchio
    cout<<c.crf()<<endl;
    rettangolo r; //definisco una variabile di tipo rettangolo
    cout<<"inserisci base e altezza"<<endl; 
    int b,h;
    cin>>b; //faccio inserire la base e l'altezza all'utente
    cin>>h;
    r.make(b,h); //tramite questa funzione creo un rettangolo dove i valori inseriti dall'utente vengono messi nei campi protected
    cout<<r.perimetro()<<endl;
    cout<<r.area()<<endl;
    return 0;

}


