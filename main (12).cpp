/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int FUNC(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return FUNC(n-1);
    }
    if(n==2){
        return FUNC(n-1)+FUNC(n-2);
    }
    
    
    
    if(n>=1 && n>=2 && n>=3){
        return FUNC(n-1)+FUNC(n-2)+FUNC(n-3);
    }
    
    return 0;
    
    
}


int main()
{
    cout<<"Hello World";
    cout<<FUNC(4);

    return 0;
}
