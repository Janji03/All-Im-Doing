#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#define DIM 10
using namespace std;



int found_a(char A[],int i)
{

    if(A[i]=='\0')
    {
        return 0;
    }
    else
    {
        if(A[i]=='a')
        {
            return found_a(A,i+1)+1;
        }
        else
            return found_a(A,i+1);
    }
}

int main(){
    char A[DIM];
    cout<<"inserisci stringa"<<endl;
    cin.getline(A,DIM+1);
    int q;
    q=found_a(A,0);
    cout<<q;
    return 0;
}