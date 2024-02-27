#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;



void cerca_parola(char A[])
{
    char B[DIM];
    cout<<"inserisci stringa"<<endl;
    cin.getline(B,DIM+1);
    if(strcmp(A,B)==1)
    {
        cout<<B;
        cout<<"presente"<<endl;
    }
    else 
    cout<<"non presente";
}





int main()
{
    char A[DIM];
    cout<<"inserisci stringa"<<endl;
    cin.getline(A,DIM+1);
    cerca_parola(A);
    return 0;

}