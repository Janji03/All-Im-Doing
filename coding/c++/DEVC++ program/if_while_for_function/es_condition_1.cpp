#include <iostream>
using namespace std;
// dati tre valori stabilisci se uno è divisibile per gli altri;
int main()
{
	int a,b,c;
	cout<<"inserisci tre valori";
	cin>> a >> b>> c;
	if ((a%b==0 && a%c==0) || (b%a==0 && b%c==0) || (c%a==0 && c%b==0))
	{
		cout<< true;
	}
	else 
	cout<< false;
	return 0;
}