#include <iostream>
#include <cstring>
#include <cstdlib>
#define DIM 100
using namespace std;

int search (char [], int );

int main()
{
    int N;
    int x;
    char A [DIM];
    cout<<"inserire stringa"<<endl;
    cin.getline(A,DIM+1);
    N==strlen(A);
    x=search(A,N);
    cout<< x;
    return 0;

}

int search(char A[], int N)
{
    int x=0;
    for(int i=0; i<N-1; i++)
    {
        if(A[i]=A[i+1])
        {
            x=i;
        }
    }
    return x;
}