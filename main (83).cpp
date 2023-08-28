/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct Activity{
    int start;
    int finish;
};


bool Compare(Activity P1, Activity P2){
    return (P1.finish<P2.finish);
}

int FUNC(vector<int> Start, vector<int> Finish, int n){
    Activity ARR[n];
    
    map<pair<int, int>, int> M;
    
    for(int j=0; j<n; j++){
        M[make_pair(Start[j], Finish[j])]=j;
    }
    
    for(int i=0; i<n; i++){
        ARR[i].start=Start[i];
        ARR[i].finish=Finish[i];
        
    }
    
    sort(ARR, ARR+n, Compare);
    int A =ARR[0].finish;
    int P=1;
    
    
    
    for(int i=1; i<n; i++){
        if(ARR[i].start>=A){
            A=ARR[i].finish;
            P=P+1;
        }
        
    }
    
    return P;
}

int main()
{
    cout<<"Hello World";
    vector<int>Start={1, 3, 0, 5, 8, 5};
    vector<int> Finish={2, 4, 6, 7, 9, 9};
    cout<<FUNC(Start, Finish, 6);
    
                            

    return 0;
}
