#include <iostream>
using namespace std;
//funzione che prende una sequenza di caratteri in input
//post condition: ritorna la sequenza di caratteri invertita

void revert()
{
    char c;
    cin>>c;
    if(c!='.')
    {
        revert();
        cout<<c;
    }
    else
    cout<<"sequenza invertita"<<endl;
}

int main()
{
    cout<<"inserisci sequenza"<<endl;
    revert();
    return 0;
}

