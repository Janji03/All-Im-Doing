#include <iostream>
#include <math.h>
#define DIM 10
using namespace std;

struct agenda
{
    char nome;
    int numero;
};

int main()
{
    agenda A,B,C;
    A.nome='A';
    B.nome='B';
    C.nome='C';
    A.numero= 1234553;
    B.numero= 22434;
    C.numero=13453;
    char x;
    do
    {
    cout<<"inserisci nome"<<endl;
    cin>> x;
    if (x==A.nome)
    {
        cout<< A.numero;
        cout<< endl;
    }
    else if (x==B.nome)
    {
        cout<< B.numero;
        cout<< endl;
    }
     else if (x==C.nome)
    {
        cout<< C.numero;
        cout<< endl;
    }
    }while(x!='D');
    return 0;
 }
