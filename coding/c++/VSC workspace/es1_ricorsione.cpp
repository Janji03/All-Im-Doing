#include <iostream>
using namespace std;

//dato n>0 stampare le cifre di n in colonna dalla piu significativa
//implementazione ricorsiva


void write_vertical(int n)
{
    if(n<10)       //caso base (se n<10) allora c'è solo una cifra
    cout<<n<<endl; //stampo n
    else
    {
        write_vertical(n/10); //chiamata ricorsiva (divido n per 10) finchè non arrivo al caso base
        cout<<n%10<<endl; // viene esegutito quando raggiungo il caso base (r-volte)
    }

}
//n=123 r=0(quante volte è stata chiamata la funzione)
// n<10 no 
// r=1 n=n/10 =12
// n<10 no
// r=2 n=n/10=1
// n<10 si (caso base quindi stampo n)
// la funzione è stata chiamata 2 volte (in modo ricorsivo) 
// n=%10 è stato eseguito 2 volte
// in memoria ci sono tre n
// il caso base (stampa n=1)+ le 2 chiamate ricorsive(stampa 12%10 e 123%10)
int main()
{
    int n=123;
    write_vertical(n);
    return 0;
}