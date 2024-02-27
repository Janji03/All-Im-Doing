#include <iostream>
#define DIM 10
using namespace std;

void length(char []);
void palindromo(char []);
void carica(char[]);
int main()
{
    char stringa[DIM];
    cout<< sizeof(stringa)<<endl;
    carica(stringa);
    length(stringa);
    palindromo(stringa);
    return 0;
}

void carica(char stringa[])
{
    cout<<"carica stringa"<<endl;
    for(int i=0;i<(sizeof(stringa));i++)
    {
        cin>> stringa[i];
    }
    
}


void length(char stringa[])
{
    int cont=0;
    
    do
    {
        if(stringa[cont]!='\0')
        {
            cont++;
            
        }
    }while(stringa[cont]!='\0');
    cout<<"legth vale"<<endl;
    cout<< cont<<endl;
}


void palindromo(char stringa[])
{
    bool check =true;
    int N=sizeof(stringa);
    int tale=N-1;
    for(int i=0;i<N;i++)
    {
        if(stringa[i]!=stringa[tale])
        {
            check=false;
        }        
        tale--;
    }
    if(check==true)
    {
        cout<<"palindromo"<<endl;
    }
    if(check==false)
    {
        cout<<"non palindromo"<<endl;
    }
}