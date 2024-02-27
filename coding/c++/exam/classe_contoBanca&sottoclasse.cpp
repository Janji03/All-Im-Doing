#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;

/*definire una classe contoBanca con un saldo e metodi
versa e preleva. Definire una sottoclasse
contoInteressi con un metodo addizionale che aumenta il
saldo del 2%.*/


class conto_banca{
    public:
    int saldo;
    void make(int x)
    {
        saldo=x;
    }
    void versa(int n)
    {
        saldo=saldo+n;
    }
    void preleva(int a)
    {
        saldo=saldo-a;
    }
};


class conto_interessi:public conto_banca
{
    public:
    void aumenta()
    {
        saldo=(saldo*2)/100;
    }
    void get_saldo()
    {
        cout<<saldo<<endl;
    }
};



int main()
{
    conto_interessi a;
    int x;
    cout<<"crea il conto"<<endl;
    cin>>x;
    a.make(x);
    int n;
    cout<<"inserisci n"<<endl;
    cin>>n;
    a.versa(n);
    a.get_saldo();
    cout<<"inserisci n"<<endl;
    cin>>n;
    a.preleva(n);
    a.get_saldo();
    a.aumenta();
    a.get_saldo();
    return 0;
    


}