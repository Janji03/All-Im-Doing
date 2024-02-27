#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;

class stack
{
    struct pila
    {
        int val;
        pila* next;
    };
    typedef pila* p_pila;
    protected:
    p_pila x;
    public:
    stack()
    {
        x=NULL;
    };
    void push(int n)
    {
        p_pila temp=new pila;
        temp->val=n;
        temp->next=x;
        x=temp;
    };
    void pop()
    {
        p_pila temp1;
        if(x!=NULL)
        {
            temp1=x;
            x=x->next;
            delete temp1;
        }
    }

    int top()
    {
        if(x!=NULL)
        {
            return x->val;
        }
    }

    bool is_empty()
    {
        if(x==NULL)
        {
            return true;
        }
        else
        return false;
    }
    


};