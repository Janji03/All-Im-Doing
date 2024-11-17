#include <iostream>
#include <ctime>
#include <cstdlib>
#define DIM 10
using namespace std;

//definizione struttura albero
//val è il valore attribuito alle foglie 
//due puntatori alla struttura btree (left and right)

struct btree{
    int val;
    btree *ltree,*rtree;
};

typedef btree * p_btree;

//funzione che genera un albero in modo random
// prende in input la profondità dell'albero (n)
//ritorna un puntatore alla struttura albero
//forma ricorsiva per generare le foglie dell'albero
//chiamata ricorsiva effettuata su lef e right
p_btree create_random_tree (int n)
{
    if(n==0)
    {
        return NULL;
    }
    else
    {
        p_btree t =new btree;
    t->val=rand()%10;
    t->ltree=create_random_tree(n-1);
    t->rtree=create_random_tree(n-1);
    return t;
    }
    
}

//funzione che prende in input un albero e la profondità p
//stampa il valore dei nodi di profondità p
//chiamata ricorsiva effutuata su left e right
//fino a quando p non diventa zero

void trova_profondità(p_btree head, int p)
{
   if(p==0)
   {
    cout<<head->val<<endl;
   }
   else
   {
    p--;
    trova_profondità(head->ltree,p);
    trova_profondità(head->rtree,p);
   }
    
}

//funzione stampa albero
//stampa pre_fissa 
//la radice è il primo elemento

void visit_pre(p_btree head)
{
    if(head!=NULL)
    {
        cout<<head->val<<" ";
        visit_pre(head->ltree);
        visit_pre(head->rtree);
        
    }
    

}

//funzione stampa albero
//stampa post_fissa
//la radice è l'ultimo elemento

void visit_post(p_btree head)
{
    if(head!=NULL)
    {
        visit_post(head->ltree);
        visit_post(head->rtree);
        cout<<head->val<<" ";
        
    }
    

}

void visit_in(p_btree head)
{
    if(head!=NULL)
    {
        visit_in(head->ltree);
        cout<<head->val<<" ";
        visit_in(head->rtree);
    }
}


//funzione che prende in input un albero e ritorna la profondità massima
// se la radice è nulla o i primi due nodi sono nulli ritorna zero
//altrimenti chiamata ricorsiva su i rami left and right 
//la profondità aumenta di uno 
// max=funzione che calcola il massimo tra i due rami 

int max_depth (p_btree head)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    if(head->ltree==NULL && head->rtree==NULL)
    {
        return 0;
    }
    else
    return (1+max(max_depth(head->ltree), max_depth(head->rtree)));
    
    
}

//funzione che prende in input gli elementi del ramo destro e sinistro
//ritorna il massimo tra i due

int max(int l,int r)
{
    if(l>r)
    {
        return l;
    }
    else
    {
        return r;
    }
}

//funzione che prende in input un albero e restituisce il numero dei nodi


int conta_nodi(p_btree head)
{
    if(head==NULL)
    {
        return 0;
    }
    else
    return (1+conta_nodi(head->rtree)+conta_nodi(head->ltree));
}

//funzione che prende in input un albero e un valore n
//restituisce true se n è presente nell'albero senno false


bool search(p_btree head,int n)
{
    if(head==NULL)
    {
        return false;
    }
    else
    if(head->val==n)
    {
        return true;
    }
    else
    {
        return (search(head->ltree,n) || search(head->rtree,n));
    }
}