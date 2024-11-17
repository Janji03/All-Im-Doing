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

p_lista remove_duplicate(p_lista head)
{
    p_lista temp=head->next; 
    p_lista p=head;
    p_lista x=head;
    while(head->next!=NULL)
    {
         while(temp->next!=NULL)
         {
            if(head->val==temp->val)
            {
                temp=temp->next;
                p->next=temp;


            }
            else
            {
                 p=p->next;
                 temp=temp->next; 
            }
            
         }
        head=head->next;
        p=head;
        temp=head->next;
    }
    return x;

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
    head=remove_duplicate(head);
    p_lista temp=head;
    cout<<"lista non duplicati"<<endl;
    while (temp!=NULL)
    {
        cout<< temp->val<<" ";
        temp=temp->next;   
    }
    return 0;
}