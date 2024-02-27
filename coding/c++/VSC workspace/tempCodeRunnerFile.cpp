#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;

void sequenza(int A[],int N)
{
    int i=0;
    int cont=1;
    int max=0;
    while(i<N)
    {
        while(A[i]==0)
        {
            i++;
        }
        while(A[i+1]!=0 && i<N)
        {
            cont++;
        }
        if(cont>max)
        {
            max=cont;
        }
        cont=1;
        i++;
    }
    cout<<max;
}


int main()
{
    int A[DIM];
    int N;
    cout<<"inserisci N"<<endl;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cout<<"inserisci elemento"<<endl;
        cin>>A[i];
    }
    sequenza(A,N);
    return 0;
}