#include <iostream>
#define pigreco 3.14
#include <cmath>
using namespace std;

class frazione{
    protected:
    int n;
    int d;
    public:
    void make(int z,int m)
    {
        n=z;
        d=m;
    }
    void stampa()
    {
        cout<<(double)n/d; 
        cout<<endl;
    }
    void moltiplica()
    {
        cout<<n*d;
        cout<<endl;
    }
    void inverti()
    {
        cout<<(double)d/n;
        cout<<endl;
    }
    void moltiplica_2(frazione a, frazione b)
    {
        cout<<(double)(a.n*b.n)/(a.d*b.d);
    }


};


int main()
{
    frazione a;
    frazione b;
    int n,d;
    cout<<"inserisci n e d"<<endl;
    cin>> n;
    cin>> d;
    a.make(n,d);
    a.stampa();
    a.moltiplica();
    a.inverti();
    cout<<"inserisci n e d 2"<<endl;
    cin>> n;
    cin>> d;
    b.make(n,d);
    b.stampa();
    a.moltiplica_2(a,b);
    return 0;
}