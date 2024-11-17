#include <iostream>
#include <cmath>
#include <cstring>
#define DIM 10
using namespace std;


void strcat(char dest[],char src[])
{
    int i=0,j=0;
    int N,M,C;
    N=strlen(dest);
    M=strlen(src);
    C=N+M;
    char concat[C];
    while(dest[i]!='\0')
    {
        concat[i]=dest[i];
        i++;
    }
    while(src[i]!='\0')
    {
        concat[i]=src[j];
        j++;
    }
    cout<<concat;
}


int main()
{
    char dest[DIM];
    char src[DIM];
    cout<<"inserisci stringa"<<endl;
    cin.getline(dest,DIM+1);
    cout<<"inserisci stringa"<<endl;
    cin.getline(src,DIM+1);
    strcat(dest,src);
    return 0;
}