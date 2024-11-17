#include <iostream>
#include <cstring>
#include <cstdlib>
#define DIM 10
using namespace std;

int main()
{
    char A[DIM],B[DIM],C[DIM];
    cin.getline(A,DIM+1);
    cin.getline(B,DIM+1);
    cin.getline(C,DIM+1);
    if(strlen(A)> strlen(B)&&strlen(A)> strlen(C))
    {
        cout<<A<<endl;
    }
    else if(strlen(B)> strlen(A)&&strlen(B)> strlen(C))
    {
        cout<<B <<endl;
    }
    else 
    cout<<C;
    return 0;
}