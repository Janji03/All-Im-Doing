#include <iostream>
#define DIM 10
using namespace std;

void scambio( int *,int *);

int main()
{
    int x,y;
    cout<<"inserisci x e y"<<endl;
    cin>> x>> y;
    scambio(&x,&y);
    cout<<x<<endl;
    cout<<y;
    return 0;
    
}


void scambio (int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

