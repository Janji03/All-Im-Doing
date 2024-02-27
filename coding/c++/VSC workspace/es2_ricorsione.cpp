#include <iostream>
using namespace std;

//dato n>0 stampare le cifre di n in colonna dalla meno significativa

void write_vertical(int n)
{
    if(n<10)  //caso base (n<10) stampo la cifra piu significativa
    cout<<n<<endl; 
   else
   {
    cout<<n%10<<endl; //stampo la cifra meno significativa 
    write_vertical(n/10); //elimino l'ultima cifra significativa
   }
}
//n=123
//n<10 no
//stampo 123%10
//ricorsione su 123/10 (quindi n=12)
//n<10 no
// stampo 12%10
//ricorsione su 12/10 (quindi n=1)
//n<10 si
// stampo n

int main()
{
    int n=123;
    write_vertical(n);

    return 0;
}