#include <iostream>
#include <cstring>
#include <cstdlib>
#define DIM 10
using namespace std;

int main()
{
    char A[DIM]="abcde";
    char B[DIM]="abae";
    cin.getline(A,3);
    cout<< A;
   //cout<< strcmp(A,B);
    return 0;
}