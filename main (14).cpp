/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int min(int a, int  b){
    if(a>b){
        return b;
    }
    if(a==b){
        return b;
    }
    if(a<b){
        return a;
    }
    return 0;
}



int FUNCCOLUMN(int M[6][5], int m, int n, int y, int z){
    if(M[m][n+1]==0 || m>5 || n+1>4){
        return z;
        
    }
    
    return FUNCCOLUMN(M, m, n+1, y, z+1);
}

int FUNCROW(int M[6][5], int m, int n, int y, int z){
    
    if(M[m+1][n]==0 || m+1>5 || n>4){
        return y;
    }
    
    
    return FUNCROW(M, m+1, n, y+1, z);
    
    
    
    
}

int FUNCRESULT(int M[6][5]){
    int X=0;
    for(int i=0; i<6; i++){
        for(int j=0; j<5; j++){
            int P= min(FUNCROW(M, i, j, 1, 1), FUNCCOLUMN(M, i, j, 1, 1));
            if(P> X){
                X=P;
            }
            
        }
    }
    
    return X;
    
    
}

int main()
{
    
    int M[6][5]={{0, 1, 1, 0, 1}, {1, 1, 0, 1, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1, 0}, {1, 1, 1, 1, 1}, {0, 0, 0, 0, 0}};
    cout<<FUNCRESULT(M);
    

    return 0;
}
