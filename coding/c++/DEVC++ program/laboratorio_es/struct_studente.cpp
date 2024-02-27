#include<iostream>
#include <cstring>
#define DIM 10
using namespace std;

struct studente
{
    char nome [DIM];
    char cognome[DIM];
    int n;
    studente* next;
};

typedef studente * p_studente;


p_studente function(p_studente head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        p_studente p=head;
        while(head->next!=NULL)
        {
            if(head->n%2!=0 || head->n%4==0)
            {
                p_studente temp=head;
                head=head->next;
                delete temp;
            }
            else
            {
                head=head->next;
            }
        }
        return p;
    }
}