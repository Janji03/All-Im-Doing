#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;

//dato un array di caratteri trovare la sottostringa gh

bool found_string(char A[], int N)
{
    if(A[N]=='h' && A[N-1]=='g')
    {
        return true;
    }
    else
    if(N==0)
    {
        return false;
    }
    else
    {
        return found_string(A,N-1);
    }
        
    
}


int main()
{
    int N;
    char A[DIM];
    cout<<"inserisci stringa"<<endl;
    cin.getline(A,DIM+1);
    N=strlen(A);
    bool check;
    check=found_string(A,N);
    cout<<check;
    return 0;
}