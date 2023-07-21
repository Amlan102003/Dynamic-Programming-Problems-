/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/**m,n are length of the strings**/

int max(int a,int b){
    if(a>=b){
        return a;
    }
    
    if(a<b){
        return b;
    }
    
    return 0;
}

int LCS(char S1[], char S2[], int m, int n){
    if(m==0 || n==0){
        return 0;
    }
    if(S1[m-1]==S2[n-1]){
        return 1+LCS(S1, S2, m-1, n-1);
    }
    
    return max(LCS(S1, S2, m, n-1), LCS(S1, S2, m-1, n));
    
}



int main()
{
    char S1[]="AGGTAB";
    char S2[]="GXTXAYB";
    cout<<LCS(S1, S2, 6, 7);

    return 0;
}
