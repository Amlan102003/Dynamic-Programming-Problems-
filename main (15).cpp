/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int FUNC(int ARR[], int n, int m){
    if(m >= n-1){
        return 0;
    }
    
    int y=100000;
    for(int p=1; p<= ARR[m]; p++){
        
        if(y> 1+FUNC(ARR, n, m+p)){
            y=1+FUNC(ARR, n, m+p);
        }
    }
    
    
    return y;
    
    
}

int main()
{
    cout<<"Hello World";
    int ARR[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout<<FUNC(ARR, 11, 0);
    

    return 0;
}