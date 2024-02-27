#include <iostream>
#include <cstring>
#include <cstdlib>
#define DIM 100
using namespace std;

void parola(char[], char, char[],int );

int main()
{
    char A[DIM],B[DIM];
    char c;
     cout<<"inserisci parola"<<endl;
    cin.getline(A,DIM+1);
    int l=strlen(A);
    cout<<"inserisci lettera"<<endl;
    cin>> c;
    parola(A,c,B,l);
    return 0;

}

void parola(char A[],char c, char B[],int l)
{
    bool check=true;
    int i=0, j=0;
    while (i<l&& check==true)
    {
        if(A[i]!=c)
        {
            i++;
        }
        else
        {
            while(A[i]!=' '&& i<l)
            {
                B[j]=A[i];
                i++;
                j++;
                check=false;
            }
        }
    }
    cout<<B;
}