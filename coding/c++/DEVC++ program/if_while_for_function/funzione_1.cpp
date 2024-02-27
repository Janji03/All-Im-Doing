#include <iostream>
using namespace std;

void funzione (int ,int);

int main()
{
	int x,y,ris;
	
	cout<<"inserire x e y"<<endl;
	cin >> x >> y;
	funzione(x,y);
	return 0;

}

void funzione (int x, int y)
{
	int a,b;
	a=(x*x)+(y*y);
	b=(x*x)*y;
	cout<<a<<endl;
	cout<<b<<endl;
}