#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#define DIM 10
using namespace std;

struct lista
{
    int val;
    lista* next; 
};

typedef lista* p_lista;

p_lista head_insert_random(p_lista head,int x)
{
    p_lista temp;
    temp= new lista;
    temp->val=x;
    temp->next =head;
    return temp;
}

void stampa(p_lista head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}

int found_max(p_lista head,int max)
{
    if(head==NULL)
    {
        return max;
    }
    else
    {
        if(head->val>max)
        {
            max=head->val;
        }
        return found_max(head->next,max);
    }
}

int found_min(p_lista head,int min)
{
    if(head==NULL)
    {
        return min;
    }
    else
    {
        if(head->val<min)
        {
            min=head->val;
        }
        return found_min(head->next,min);
    }
}



p_lista convert_binary(p_lista z,int n)
{
    if(n==0)
    {
        return z;
    }
    else
    {
        p_lista temp=z;
        temp->val=(n%2);
        temp->next=z;
        return convert_binary(temp,n/2);
    }


}


int main()
{
    int N,x;
    p_lista head=NULL;
    cout <<"inserisci N"<<endl;
    cin>> N;
    srand(time(0));
    for (int i=0; i<N; i++)
    {
       
        x=rand()%100;
        head=head_insert_random(head,x);

    }
    stampa(head);
    cout<<endl;
    int max=0;
    max=found_max(head,max);
    cout<<"massimo vale"<<endl;
    cout<<max<<endl;
    int min=max;
    min=found_min(head,min);
    cout<<"minimo vale"<<endl;
    cout<<min;
    p_lista z=NULL;
    int n;
    cout<<"inserisci n"<<endl;
    cin>>n;
    z=convert_binary(z,n);
    stampa(z);
    return 0;
}