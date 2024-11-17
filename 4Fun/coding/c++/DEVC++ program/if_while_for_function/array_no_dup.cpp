#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//dato un vettore stamparlo senza duplicati 
void riempimento (int [], int);
void nodup (int [], int);

void riempimento (int A[], const int n){
    srand(time(0));
    cout << "Riempimento casuale del vettore: ";
    for(int i=0;i<n;i++){
        A[i]=rand()%20;
        cout << A[i] << " ";
    }
    cout << endl;
}

void nodup (int A[], const int n){
    bool check;
    cout << "Vettore senza duplicati: " << endl;
    for(int i=0;i<n;i++){
        check = true;
        for(int j=0;j<i;j++){
            if(i!=j){
                if(A[i]==A[j])
                    check = false;
            }
        }
        if(check == true)
            cout << A[i] << " ";
    }
}

const int length = 10;
int main(){
    int A[length];  
    riempimento(A,length);
    nodup(A,length);
    return 0;
}