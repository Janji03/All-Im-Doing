#include <iostream>
#include <cstring>
#include <cstdlib>
#define DIM 100
using namespace std;



void lowercase(char A[],int N)
{
    for(int i=0;i<N;i++)
    {
        if(A[i]>=122 && A[i]<97)
        A[i]=A[i]+32;
    }
    cout<<A;
}


void uppercase(char A[],int N)
{
    for(int i=0;i<N;i++)
    {
        if(A[i]>=97 && A[i]<122)
        {
            A[i]=A[i]-32;
        }
    }
    cout<<A;
}

int main()
{
    char A[DIM];
    cout<<"inserisci stringa"<<endl;
    cin.getline(A,DIM+1);
    int N=strlen(A);
    lowercase(A,N);
    cout<<endl;
    uppercase(A,N);  
    return 0;
}
