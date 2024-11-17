#include <iostream>
using namespace std;


int square_root(int n,int i)
{

    if(i*i<=n)
    {
        return square_root(n,i+1);
    }
    else
    return i-1;
}


int main()
{
    int r=1,n;
    cout<<"inserisci n"<<endl;
    cin>>n;
    r=square_root(n,r);
    cout<<r<<endl;
    return 0;
}