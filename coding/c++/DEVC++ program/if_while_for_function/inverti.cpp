#include<iostream>
#include <math.h> 
using namespace std;

void inverti(int);

int main()
{
	int n;
	cout<< "inserisci n"<<endl;
	cin>>n;
	inverti(n);
	return 0;
}

void inverti (int n)
{
	do
	 {
	 	cout<< n%10;
	 	n=n/10;
	 	
	 }while (n>0);
	 
}