#include <iostream>
#include <cmath>
#define DIM 10
using namespace std;


class triangolo{
    protected:
    int base;
    int altezza;
    public:
    double area()
    {
        return (base*altezza)/2;
    }
    triangolo(int a=0,int b=0)
    {
        base=a;
        altezza=b;
    }
};


int main()
{
    int b,h;
    cout<<"inserisci base e altezza"<<endl;
    cin>>b;
    cin>>h;
    triangolo t=triangolo(b,h);
    cout<<t.area()<<endl;
    return 0;
}

