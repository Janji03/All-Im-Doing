#include <iostream>
#include <cmath>
#include <iomanip>
#define DIM 10
using namespace std;


class radice
{
    protected:
    int n;
    public:
    radice(int m)
    {
        n=m;
    }
    double square_root()
    {
        if(n>0)
        {
            return sqrt(n);
        }
        else
        {
        return 0;
        }
    }
};


int main()
{
    int n;
    cout<<"inserisci n"<<endl;
    cin>>n;
    radice a=radice(n);
    double r=a.square_root();
    cout<<setprecision(4)<<r;
    return 0;
}

