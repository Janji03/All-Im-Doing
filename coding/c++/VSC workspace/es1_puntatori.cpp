#include <iostream>
#define DIM 10
using namespace std;

typedef int* p_int; // con typedef definisco un tipo (in questo caso un puntatore intero)

int main()
{
    int x=1;
    p_int p,q;
    p=&x; // accedo all indrizzo di x
    q=p; // nell indirizzo di q copio il contenuto di p 
    *p=*p +1; // accedo a x tramite il puntatore e lo incremento quindi x= 1+1
    *q=*q+1;  // accedo a p tramite puntatore con p che punta sua volta a x e lo aggiorno quindi x= 2+1
     cout<< x; // x=3
     return 0;
}