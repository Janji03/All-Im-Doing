#include <iostream>
#include <cstring>
#include <cstdlib>
#define DIM 10
using namespace std;
//funzioni con le stringhe
int main()
{
    char A[DIM];
    char B[DIM];
   cin.getline(A,DIM);
   //cin.getline(B,DIM);
   /*cout<<strlen(A);
   cout<<endl;
   cout<<sizeof(A) ;
   strcpy(B,A); //questa funzione non controlla se le lunghezze sono compatibili
   cout<<endl;
   
    strncpy(A,B,3); //come strcpy ma piu safe 
    cout<< A;
    strncat(A,B,2); //concatena le due stringhe 
    cout<<strcmp(A,B);
    cout<< atoi(A);*/
    cout<<A;
   
   return 0;
}