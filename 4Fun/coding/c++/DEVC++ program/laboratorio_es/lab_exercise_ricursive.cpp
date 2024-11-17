#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#define DIM 10 
using namespace std;

//funzione che prende in input una stringa
//ritorna true se la stringa contiene la sottostinga "gh"
//altrimenti ritorna false
//utilizza solo la lunghezza della stringa come parametro

bool found_gh(char A[],int N)
{
    if(N==0)
    {
        return false;
    }
    else
    if(A[N]=='h'&& A[N]=='g')
    {
        return true;
    }
    else
    {
        return found_gh(A,N-1);
    }
}

//funzione che prende in input un array di interi
//ordina l'array mettendo a sinistra gli elementi pari
//e a destra gli elementi dispari
//non importa che gli elementi siano ordinati 


void ordina_array(int A[],int N,int i)
{
    int temp;
    if(N>i)
    {
        if(A[i]%2==0)
        {
            ordina_array(A,N,i++);
        }
        else
        {
            temp=A[i];
            A[i]=A[N-1];
            A[N-1]=temp;
            ordina_array(A,N-1,i);  
        }
    }
}

//algoritmo di fibonacci implementato in modo ricorsivo efficiente 
//pre condition: curr=1, prev=0

int fibonacci(int term, int curr,int prev)
{
    if(term==0)
    {
        return prev;
    }
    else
    return fibonacci(term-1,curr+prev,curr);
}