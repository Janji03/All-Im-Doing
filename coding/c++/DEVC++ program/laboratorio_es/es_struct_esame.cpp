#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;


struct playlist{
    char titolo [DIM];
    int durata;
    int riproduzione;
    int ascoltatori;
    playlist* next;
}

typedef playlist* playlist;


playlist carica(playlist head , char titolo[DIM],int durata, int riproduzione , int ascoltatori)
{
    playlist temp= new playlist ;
    strcpy(temp->titolo, titolo)
    temp->durata=durata;
    temp->riproduzione=riproduzione;
    temp->ascoltatori=ascoltatori;
    temp->next=head;
    head=temp;
    return head;
}


playlist function_1(playlist head,playlist new_p)
{
    playlist temp= new playlist;
    while(head->next!=NULL)
    {
        if(head->durata>180)
        {
        strcpy(temp->titolo, head->titolo)
         temp->durata=head->durata;
        temp->riproduzione=head->riproduzione;
        temp->ascoltatori=head->ascoltatori; 
        temp->next=new_p
        new_p=temp
        }
        head=head->next;
    }

    return new_p;

}

int durata (playlist head)
{
    int x=0;
    while(head->next!=NULL)
    {
        x=x + head->durata;
    }
    return x;
}

void max_riproduzioni(playlist head, char winner[DIM])
{
    double  max=0;
    double x;
    while(head->next!=NULL)
    {
        x=(head->riproduzione/head->ascoltatori);
        if(max<x)
        {
            max=x;
            strcpy(winner,head->titolo);
        }
        head=head->next;
    }
}