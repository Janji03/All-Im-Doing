#include <iostream>
using namespace std;

int main()
{
    float a,b,c,d;
    float media;
    cout<<"inserire 4 valori"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    media=(a+b+c+d)/4;
    cout<<media<<endl;
    float x;
    x=a;
    if(media-x>=media-b)
    {
        x=b;
    }
    else
    if(media-x>=media-c)
    {
        x=c;
    }
    else
    if(media-x>=media-d)
    {
        x=d;
    }
    cout<<"valore piu vicino"<<endl;
    cout<<x;
    return 0;
    
}