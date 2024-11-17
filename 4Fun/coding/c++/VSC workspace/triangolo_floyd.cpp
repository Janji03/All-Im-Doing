#include <iostream>
using namespace std;

//triangolo di floyd

int main()
{
    int n,k=1,x=1;
    cout<<"inserisci n"<<endl;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<< x;
            cout<<' ';
            x++;
        }
        k++;
        cout<<endl;
    }

    return 0;
}