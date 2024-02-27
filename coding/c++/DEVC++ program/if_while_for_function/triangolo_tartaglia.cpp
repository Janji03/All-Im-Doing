#include <iostream>
using namespace std;
// triangolo di tartaglia

int main()
{
	int exp,v=1;
	
	cout<<"inserire exp"<<endl;
	cin>>exp;
	cout<<"becca il triangolo der sium"<<endl; 
	for(int i=0;i<=exp;i++)
	
	{
		for(int j=0;j<exp-i;j++)
		{
			cout<<"\t";
		}
		for(int j=0;j<=i;j++)
		{
			if(j!=0)
			{
			v=v*(i-j+1)/j;	
			}
		    else
			{
			v=1;
			}
			cout<<"\t"<<v<<"\t";
		}
		cout<<endl<<endl;
	}
	return 0;
}