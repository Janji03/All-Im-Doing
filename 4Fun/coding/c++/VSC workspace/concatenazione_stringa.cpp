#include <iostream>
#include <cmath>
#include <cstring>
#define DIM 100
using namespace std;


void strcat(char dest[],char src[],char concat[])
{
    
    int i=0,j=0;
    while(dest[i]!='\0')
    {
        concat[i]=dest[i];
        i++;
    }

    while(src[j]!='\0')
    {
        concat[i]=src[j];
        j++;
        i++;
    }

}


int main()
{
    char dest[DIM];
    char src[DIM];
    char concat[DIM];
    cout<<"inserisci stringa"<<endl;
    cin.getline(dest,DIM+1);
    cout<<"inserisci stringa"<<endl;
    cin.getline(src,DIM+1);
    strcat(dest,src,concat);
    cout<<"stringa concatenata"<<endl;
    cout<<concat;
    return 0;
}