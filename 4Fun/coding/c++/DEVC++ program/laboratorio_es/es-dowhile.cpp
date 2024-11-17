#include <iostream>
using namespace std;

int main()
{
    int n;
    double media;
    int somma=0;
    int cont=0;
    do
    {
        if(n!=0)
        {
        cout<<"inserisci n"<<endl;
        cin>> n;
        somma=somma+n;
        cont++;
        media=(double)somma/(double)cont;
        cout<<"media vale"<<endl;
        cout<<media;
        cout<<endl;
        }
    }while (n!=0);
    return 0;
}