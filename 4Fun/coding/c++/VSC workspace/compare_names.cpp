#include <iostream>
#include <cstring>
#include <cstdlib>
#define DIM 10
using namespace std;

// strcmp da -1 se il secondo è piu grande, 1 se è piu grande il primo

int main()
{
     char A[DIM],B[DIM];
     cout<<"inserisci 2 nomi"<<endl;
    cin.getline(A,DIM+1);
    cin.getline(B,DIM+1);
    int x;
    x=strcmp(A,B);
    if(x==-1)
    {
        cout<<A;
    }
    else
    cout<<B;
    return 0;
}