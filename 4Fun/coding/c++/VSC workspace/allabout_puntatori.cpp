#include <iostream>
#include <cstring>
#include <cstdlib>
#define DIM 100
using namespace std;

/*void scambio( int *,int *);

int main()
{
    int x=2,y=3;
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
}*/

/*int incrementa(int , int*, int*);

int main()
{
   int a=0;
   int x=2,y=2;
   a=incrementa(a,&x,&y);
    cout<<a;
    return 0;

}

int incrementa (int a, int *x,int *y)
{
    a=*x+*y;
    return a;
}*/


int main()
{ 
    int *p, *q;
    int x,y;
    p= new int;
    *p=1;
    q=p;
    cout <<*p<<endl;
    cout<<*q<<endl;
    delete p;
    p=NULL;
    p=new int ;
    *p=2;
    cout<<*p<<endl;
    delete p;
    p=NULL;
    p= new int;
    x=2;
    p=&x;
    x=x+1;
    cout<< *p;
    return 0;
       
    
   
}