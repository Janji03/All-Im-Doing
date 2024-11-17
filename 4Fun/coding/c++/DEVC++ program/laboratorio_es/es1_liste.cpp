#include <iostream>
using namespace std;



struct lista
{
    int val;
    lista* next; 
};

typedef lista* p_lista;

p_lista head_insert (p_lista head, int x)
{
    p_lista temp;
    temp= new lista;
    temp-> val=x;
    temp->next =head;
    return temp;
}




int main()
{
    int x, N;
    p_lista head=NULL;
    cout<<"inserisci N"<<endl;
    cin>>N;
    for(int i =0; i<N;i++)
    {
        cout<<"inserisci elemento "<<endl;
        cin>> x;
        head=head_insert(head,x);

    }
    p_lista temp=head;
    while (temp!=NULL)
    {
        cout<< temp->val<<" ";
        temp=temp->next;   
    }

    return 0;


}

