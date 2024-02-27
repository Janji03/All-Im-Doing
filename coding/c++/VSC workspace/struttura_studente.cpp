
/* strutture= record formate da elementi di diverso tipo (dato eterogeneo)
-bisogna specificare il nome dei campi (componenti) e il tipo di dato contenuto nel campo
- es: struct data {int day; int month; int year;};
- es: struct studente { char nome; char cognome ; struct (data) data_nasc} si puo utilizzare una struttura 
come campo di un altra struttura 
Operazioni:
-selezione: serve per accedere ai campi sintassi oggi.day= oggi.day+2  nome.array[0]='P';

*/
#include <iostream>
#define DIM 10
using namespace std;

int main()
{
    
    struct studente 
    {
        char  nome;
        char cognome;
        int voto1;
        int voto2;
        int voto3;
        int age;
        
    };
    studente A;
    
        cout<<"inserisci nome"<<endl;
        cin>> A.nome;
        cout<<"inserisci cognome"<<endl;
        cin>> A.cognome;
        cout<<"inserisci eta"<<endl;
        cin>> A.age;
        cout<<"inserisci voti"<<endl;
        cin >> A.voto1 >>A.voto2 >>A.voto3;
        cout<<"media vale"<<endl;
        double media=(A.voto1+A.voto2+A.voto3)/3.0;
        cout<< media;

    

    return 0;
}