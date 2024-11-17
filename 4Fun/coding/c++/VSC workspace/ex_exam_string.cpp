#include <iostream>
#include <cstring>
#include <cstdlib>
#define DIM 100
using namespace std;


int main()
{
    char A[DIM];
    bool check=true;
    int i=0;
    cin.getline(A,DIM);
    int x=strlen(A);
    while(check==true && i<x)
    {
        if(A[i]!='g'&& A[i+1]!='h'|| A[i]!='c'&& A[i+1]!='h')
        i++;
        else 
        {
            check=false;
        }

    }
    if(check==false)
    {
        cout<<"ok";
    }
    else
    cout<<"no";
    return 0;
}