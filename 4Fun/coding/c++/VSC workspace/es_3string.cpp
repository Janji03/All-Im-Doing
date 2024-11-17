#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;

void remove_string (char []);
int main()
{
    char A[DIM];
    cout<<"inserisci stringa"<<endl;
    cin.getline(A,DIM+1);
    remove_string(A);
    return 0;
}

void remove_string(char A[])
{
    char B[DIM];
    bool check=false;
    int N,k,z;
    cout<<"inserisci stringa"<<endl;
    cin.getline(B,DIM+1);
    N=strlen(B);
    for(int i=0;A[i]!='\0';i++)
    {
        k=i;
        for(int j=0; B[j]!='\0';j++)
        {
            if(A[i]==B[j])
            {
                check=true;    
            }
            check1=check;
            i++;
            check=false;
        }
        if(check1==true)
        {
            z=k;
        }
    }
    
}