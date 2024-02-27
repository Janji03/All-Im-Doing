#include <iostream>
#include <cstring>
#include <cmath>
#define DIM 10
using namespace std;


//classe segmento
//protected: 4 coordinate cartesiane che identificano 2 punti del piano
//public: costruttore segmento 
//public:funzione che calcola lunghezza del segmento con teorema di Pitagora

class segmento
{
    protected:
    int x;
    int y;
    int x1;
    int y1;
    public:
    segmento(int x,int y,int x1,int y1)
    {
        this->x=x;
        this->x1=x1;
        this->y=y;
        this->y1=y1;
    }
    int length()
    {
        int l;
        int c1,c2;
        c1=abs(x1-x);
        c2=abs(y1-y);
        l=sqrt(c1*c1+c2*c2);
        cout<<"lunghezza vale:"<<l<<endl;
        return l;
    }
};

//sotto-classe segmento_adiacente
//protected: 2 coordinate cartesiane che identificano un punto sul piano 
//public: costruttore make
//public:funzione che calcola la lunghezza del primo segmento adiacente
//public:funzione che calcola la lunghezza del secondo segmento adiacente 
//public:funzione che somma la lunghezza dei due segmenti adiacenti piu quello iniziale
//(chiama la funzione length della classe segmento)

class segmento_adiacente:public segmento
{
    protected:
    int xs;
    int ys;
    int l1;
    int l2;
    public:
   segmento_adiacente(int xs,int ys):segmento(x,y,x1,y1)
    {
        this->xs=xs;
        this->ys=ys;
    }
    void length_1()
    {
        int c1,c2;
        c1=abs(xs-x);
        c2=abs(ys-y);
        l1=sqrt(c1*c1+c2*c2);
        cout<<"lunghezza primo segmento adiacente:"<<l1<<endl;
    }
    void length_2()
    {
        int c1,c2;
        c1=abs(xs-x1);
        c2=abs(ys-y1);
        l2=sqrt(c1*c1+c2*c2);
        cout<<"lunghezza secondo segmento adiacente:"<<l2<<endl;
    }
    void length_tot()
    {
        int ltot;
        ltot=l1+l2+segmento::length();
        cout<<"lunghezza totale:"<<ltot<<endl;
    }

};