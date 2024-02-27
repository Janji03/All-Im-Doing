#include<iostream>
#include <cstring>
#define DIM 10
using namespace std;


/*
//funzione che prende in input n
//stampa i predecessori pari e non multipli di 4
//pre condition: n>0
*/


void function(int n)
{
    n--;
    while(n>0)
    {
        if(n%2==0 && n%4!=0)
        {
            cout<<n<<endl;
        }
        n--;
    }
}

void function_recursive(int n)
{
    if(n!=0)
    {
        n=n-1;
        if(n%2==0 && n%4!=0)
        {
            cout<<n<<endl;
        }
        function(n);
    }

}

int main()
{
    int n;
    cout<<"inserisci n"<<endl;
    cin>>n;
    function(n);
    return 0;
}