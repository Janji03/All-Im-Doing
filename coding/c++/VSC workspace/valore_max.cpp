#include <iostream>
using namespace std;

int main(){
    int a,b,c,max;
    cout <<"inserire tre numeri";
    cin >> a >> b >> c;
    
    if(b>a && b>c)
    {
        max=b;
    }
    else
    if(c>a && c>b)
    {
        max=c;
    }
    else 
    max=a;
    cout << max;
    return 0;
}