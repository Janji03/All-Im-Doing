#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;


//definisco una struttura libro con 3 campi e un puntatore libro next
//posso creare una libreria usando la lista 
struct book{
    char titolo[DIM];
    int prezzo;
    int copie;
    book* next; 

};

//difinisco un tipo puntatore alla struttura book 
typedef book* p_book;


//creo una libreria
//funzione tipo head_insert dove passo i campi della struttura 
//carico la struttura passando il puntatore head e usando un puntatore temp
p_book carica(p_book head, char titolo[], int prezzo, int copie )
{
    p_book temp= new book;
    strcpy(temp->titolo, titolo);
    temp->prezzo=prezzo;
    temp->copie=copie;
    temp->next=head;
    head=temp;
    return temp;
}

//funzione che trova il titolo del libro con il prezzo massimo nella libreria
//funzione tipo void che prende in input un puntatore alla lista head e una stringa 
//la stringa winner permette di passare il titolo del libro anche se la funzione è di tipo void
//scorro la lista usando max per trovare il prezzo massimo e strcpy per caricare il titolo del libro sulla stringa winner
void most_expensive(p_book head, char winner[])
{
    int max=0;
    if(head==NULL)
    {
        cout<<"lista vuota"<<endl;
    }
    else
    while(head->next!=NULL)
    {
        if(head->prezzo>max)
        {
            max=head->prezzo;
            strcpy(winner, head->titolo);
        }
        head=head->next;
    }
}

//funzione di tipo double che calcola la media dei prezzi della lista
//se la lista è vuota la media è zero
//calcolo la media sommando i prezzi dei libri della lista e usando cont per contare quanti libri ci sono

double media(p_book head)
{
    double media;
    int cont=0;
    if(head==NULL)
    {
        return 0;
    }
    else
    while(head->next!=NULL)
    {
        media=media+head->prezzo;
        cont++;
    }
    return media/cont;
}

