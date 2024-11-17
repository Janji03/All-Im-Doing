#include <iostream>
using namespace std;

struct lista{
    int val;
    lista *next;
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

p_lista concatenazione(p_lista head, p_lista head1)
{
    p_lista temp=head;
    if(head==NULL)
    {
        return head1;
    }
    else
    if(head1==NULL)
    {
        return head;
    }
    else
    {
        while(head->next!=NULL)
        {
            head=head->next;
        }
        head->next=head1;
    }
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
    p_lista head1=NULL;
    int M;
    cout<<"inserisci M"<<endl;
    cin>>M;
    for(int i =0; i<M;i++)
    {
        cout<<"inserisci elemento "<<endl;
        cin>> x;
        head1=head_insert(head1,x);

    }
    p_lista temp=NULL;
    temp=concatenazione(head,head1);
    while (temp!=NULL)
    {
        cout<< temp->val<<" ";
        temp=temp->next;   
    }
    return 0;
}