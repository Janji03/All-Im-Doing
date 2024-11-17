#include <iostream>
#define DIM 10
using namespace std;

typedef int* p_int;

int main()
{
   p_int p;
   int x=1;
   p=&x;
   *p=*p+1;
   cout<< *p<<endl;
   delete p;
   p=NULL;
   cout<< p;
    return 0;
}