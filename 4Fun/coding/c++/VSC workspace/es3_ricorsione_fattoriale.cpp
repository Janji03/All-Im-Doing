#include <iostream>
using namespace std;

//calcolo fattoriale di n
//procedimento ricorsivo
//definisco funzione_fattoriale int

//effettuo la chiamata ricorsiva moltiplicando n per il predecessore 
//la chiamata si effetua finche non raggiunge il caso base
//n decrementa fino a zero (caso base)
int factorial(int n)
{
    if(n==0) //caso base(se n=0 devo moltiplicare per 1)
    return 1;
    else
    return(n*factorial(n-1)); //chiamata ricorsiva (moltiplico n per il predecessore)
}

int main()
{
    int f,n=5;
   f=factorial(n);
   cout<<f<<endl;
    return 0;
}