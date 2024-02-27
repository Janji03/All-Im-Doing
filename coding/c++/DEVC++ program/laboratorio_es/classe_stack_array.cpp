#include <iostream>
#define DIM 10
using namespace std;


class stack_array
{
    protected:
    int pila[DIM];
    int i;
    public:
    stack_array()
    {
        i=0;
    }
    void push(int n)
    {
        if(i==DIM)
        {
            cout<<"out of memory"<<endl;
        }
        else
        {
            pila[i]=n;
            i++;
        }
    }
    void pop()
    {
        if(i!=0)
        {
            i--;
        }
    }
    int top()
    {
        if(i!=0)
        {
            return pila [i-1];
        }
    }
    
};