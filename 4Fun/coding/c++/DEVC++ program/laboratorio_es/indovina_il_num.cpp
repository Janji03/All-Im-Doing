#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x,n;
    srand(time(0));
    x=rand()%101;
    do
    {

        cout<<"inserire n"<<endl;
        cin>> n;
        if(n!=x)
        {
        if(n>x)
        cout<<"troppo grande"<<endl;
        if(n<x)
        cout<<"troppo piccolo"<<endl;
        }
    }while(n!=x);
    cout<<"gg"<<endl;
    return 0;
}