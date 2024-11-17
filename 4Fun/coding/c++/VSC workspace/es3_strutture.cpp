#include <iostream>
#define DIM 10
using namespace std;
//esercizio 3 strutture
 struct studente
    {
        char nome;
        char cognome;
        int age;
        int voto1;
        int voto2;
        int voto3;
    };

int main()
{
    float media=0,x=0;
    studente studente1{'G','C',18,21,23,25};
    studente studente2{'A','B',18,21,30,25};
    studente studente3{'Q','L',18,25,27,25};
    media=(studente1.voto1+studente1.voto2+studente1.voto3)/3.0;
   cout<<"media studente 1 vale"<<media<<endl;
   media=(studente2.voto1+studente2.voto2+studente2.voto3)/3.0;
   cout<<"media studente 2 vale"<<media<<endl;
   media=(studente3.voto1+studente3.voto2+studente3.voto3)/3.0;
   cout<<"media studente 3 vale"<<media<<endl;
   x=(studente1.age+studente2.age+studente3.age )/3.0;
   cout<< "media eta vale"<<x;
   return 0;
}