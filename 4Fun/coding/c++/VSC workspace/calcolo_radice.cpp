#include <iostream>
#include <iomanip>
using namespace std;
// calcolo la radice utilizzando la media geometrica 
int main()
{
	int n,i=0;
	float x;
	cout<< "inserisci n";
	cin>> n;
	x=n+1;
	
	do
	{
		x=(x + n/x)*0.5; 
		i++;
	}while(i<10);
	cout<< (int)x;
	cout<<endl;
	cout<< x;
	return 0;
	
	
	
}