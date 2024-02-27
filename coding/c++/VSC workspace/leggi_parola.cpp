#include <iostream>
#define DIM 10
using namespace std;

int parola(char [],char [], int, int );
void carica(char[],int);
int main()
{
    int n, N;
    char str[DIM], dest[DIM];
    cout <<"insersci N e n"<<endl;
    cin>>N >>n;
    int x;
    carica(str,N);
    x=parola(str,dest,N,n);
    cout<<"numero di lettere vale"<<endl;
    cout<<x<<endl;
    return 0;
}

void carica(char str[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<"inserisci "<<i<<"esimo"<<endl;
        cin>> str[i];
    }

}

int parola(char str[],char dest[],int N,int n)
{
    int cont=0,i=0,cont1=0;
    do
    {
        if((cont<n ) && (i<N))
        {
        while((str[i]=='_')&& (i<N))
        {
            i++;
        }
        cont++;
        if(cont<n)
        {
             while ((str[i]!='_')&& (i<N))
             {
               i++;
             }
        }
        }
    }while ((cont<n ) && (i<N));
    int j=0; 
    while((str[i]!='_')&& (i<N))
    {
        dest[j]=str[i];
        j++;
        i++;
        cont1++;
    }
    cout<<"dest vale"<<endl;
    for(int j=0;j<cont1;j++)
    {
        cout<<dest[j];
        cout<<endl;
    }

    return cont1;
}