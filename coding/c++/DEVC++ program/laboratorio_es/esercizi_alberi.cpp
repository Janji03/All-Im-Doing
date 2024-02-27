//scrivere una funzione iterativa che prende in input un
//albero binario di ricerca e stampa l’elemento massimo
//memorizzato


#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#define DIM 10
using namespace std;

struct btree{
    int val;
    btree *ltree,*rtree;
};

typedef btree * p_btree;

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

void visit_pre(p_btree head)
{
    if(head!=NULL)
    {
        cout<<head->val<<" ";
        visit_pre(head->ltree);
        visit_pre(head->rtree);
        
    }
    

}

//funzione che prende in input un albero binario e stampa il massimo (ovvero quello piu a destra)
//funzione implementata in modo ricorsivo 

void found_max(p_btree head)
{
    if(head->rtree==NULL)
    {
        cout<<head->val;
    }
    else
    {
        found_max(head->rtree);
    }
}


//funzione che prende in input un albero binario e stampa il massimo (ovvero quello piu a destra)
//funzione implementata in modo iterativo

void found_max_iteration(p_btree head)
{
    while(head->rtree!=NULL)
    {
        head=head->rtree;
    }
    cout<<head->val;
}


int main()
{
    p_btree head;
    int N;
    cout<<"inserisci N"<<endl;
    cin>>N;
    head=create_random_tree(N);
    visit_pre(head);
    int max;
    found_max(head);
    return 0;
}