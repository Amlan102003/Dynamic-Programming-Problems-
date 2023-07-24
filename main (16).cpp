/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int max(int a, int b){
    if(a>b){
        return a;
        
    }
    if(a==b){
        return a;
    }
    
    if(a<b){
        return b;
    }
    
    return 0;
}

int FUNC(int P[], int W[], int N, int Wo, int m, int Po){
    if(Wo<=0 || m>= N){
        
        return Po;
        
    }
    
    return max(FUNC(P, W, N, Wo-W[m], m+1, Po+P[m]), FUNC(P, W, N, Wo, m+1, Po));
    
    
}

int main()
{
    int P[]={1, 2, 3};
    int W[]={4, 5, 1};
    
    cout<<FUNC(P, W, 3, 4, 0, 0);

    return 0;
}