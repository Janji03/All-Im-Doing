#include <iostream>
using namespace std;



int function(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return (n*n+function(n-2));
    }
}



int main()
{
   int n;
   int f;
   cout<<"inserisci n"<<endl;
   cin>> n;
   f=function(n);
    cout<<f<<endl;
    return 0;
}