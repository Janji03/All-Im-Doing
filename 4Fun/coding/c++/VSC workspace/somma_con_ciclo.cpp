#include <iostream>
using namespace std;
// dati N valori stamparne la somma
int main()
 {
 	int n,N,i=0,somma=0;
 	cout<<"inserire N";
 	cin>> N;
 	for(i=0;i<N;i++)
 	{
 		cout<<"inserisci n";
 		cout<<endl;
 		cin>> n;
 		somma=somma+n;
	 }
	 cout<<"somma vale "<< somma;
	 return 0;
 }