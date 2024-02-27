#include <iostream>
using namespace std;

struct stack{
    char val;
    stack* next;
};

void revert (){
    char c;
    stack *p,*q;
    p=NULL;
    cin>> c;
    while(c!='.')
    {
      q=new stack;
      q->val=c;
      q->next=p;
      p=q;
      cin>>c;  
    }
    cout<<"sequenza invertita"<<endl;
    while(p!=NULL)
    {
        cout<<p->val;
        p=p->next;
    }
}

int main()
{
    revert();
    return 0;
}