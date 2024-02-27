#include <iostream>
#include <ctime>
#include <cstdlib>
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

    p_lista temp=head;
    while (temp!=NULL)
    {
        cout<< temp->val<<" ";
        temp=temp->next;   
    }

    return 0;

}