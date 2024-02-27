#include <iostream>
#define DIM 10
using namespace std;

void controllo_alpha_numerico(char [], char[]);

int main()
{
    char A[DIM]="abcd",B[DIM]="abdef";
    controllo_alpha_numerico(A,B);
    return 0;
}



void controllo_alpha_numerico(char A[],char B[])
{
    bool check=true,check1=true;
    for(int i=0;i<sizeof(A);i++)
    {
        if(A[i]!=B[i])
        {
            check=false;
            if(A[i]>B[i])
            {
                check1=false;
            }
        }
    }
    if(check==true)
    {
        cout<<"sono uguali"<<endl;
    }
    if (check==false)
    {
        if(check1==true)
        {
            cout<<"A"<<endl;
        }
        else
        cout<<"B"<<endl;
    }
}