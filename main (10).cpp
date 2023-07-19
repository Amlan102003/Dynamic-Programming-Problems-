/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int FUNC(int ARR[], int P){
    if(P==0){
        return 1;
    }
    
    
    
    int X=1;
    for(int i=0; i<P; i++){
        if(ARR[i] < ARR[P]){
            if(FUNC(ARR, i)>X-1){
                X=1+FUNC(ARR, i);
            }
        }
            
            
        
    }
    
    return X;
    
}


int  FUNC2(int ARR[], int n){
    int Y=0;
    for(int d=0; d<n; d++){
        if(FUNC(ARR, d)>Y){
            Y=FUNC(ARR, d);
        }
    }
    
    return Y;
}

int main()
{
    cout<<"Hello World";
    int ARR[]={50, 3, 10, 7, 40, 80};
    cout<<FUNC2(ARR, 6);
    
    

    return 0;
}
