#include <iostream>
#include <cstring>
#define DIM 10
using namespace std;

int main()
{
    char V[DIM];
    int N;
    int j;
    cout<<"inserisci stringa"<<endl;
    cin.getline (V,DIM+1);
    N=strlen(V);
    int n,i=0,v,x;
    cin>>n;

      if(n==0)
            exit(0);
      if(n%2!=0) 
            x=n+1; 
      else 
            x=n;

      if(n<=5) v = (x-x/2)-1;
      if(n>5) v = (x-x/2);

   while(i<n)
     {
       for(int r=n-i;r>0;r--)
             cout<<" ";
       for(j=0; j<=i*2;j++) 
         {
            if(i<=v)
              {
                if(i==i)
                cout<<" "; 
              }
           else
                cout<<"*"; 
         }
       for(int l=n*2; l>j;l--)
            cout<<" "; 

       for(j=0; j<=i*2;j++)
         {
           if(i<=v)
             {
               if(i==i)
                   cout<<" ";
             }
           else
               cout<<"*"; 
         }
       cout<<endl;
       i++;
    }
 
   j=0;
  while(j<n-2)
    {
      for(int p=0; p<=n*4;p++)
            cout<<"*";

      cout<<endl;
      j++;
    }

  int k=0,s=0;
  while(k<n*2-2)
    {
      for(int r=0;r<k*2;r++)
           cout<<" ";
   
      for(int p=n*4; p>=s;p--)
           if(k==0&&p==n*4||p==0)
                    cout<<" ";
           else
                    cout<<"*";
          s++; s++;s++;s++;
          
      cout<<endl;
      k++;
    }
 return 0;

}