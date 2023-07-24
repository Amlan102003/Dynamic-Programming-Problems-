/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>


using namespace std;

int FUNC1(string ARR[], string Word, int Size){
    
    
    for(int i=0; i<Size; i++){
        
        
        
        if(ARR[i].compare(Word)==0){
            return 1;
        }
        
    }
    
    return 0;
    
    
    
}


int MAINFUNC(string INPUTSTR, int N, string ARR[], int Size,  int L, int p){
    
     if(p> N-L && L!=N){
        return 0;
        
    }
    
    if(L>=N){
        return 1;
    }
    
    
    if(FUNC1(ARR, INPUTSTR.substr(L, p), Size)){
        return MAINFUNC(INPUTSTR, N, ARR, Size, L+p , 1);
    }
    
    else{
        return MAINFUNC(INPUTSTR, N, ARR, Size,  L, p+1);
    }
    
   
    
    
    
    
    
    
    
}



int main()
{
    cout<<"Hello World";
    
    string ARR[] = {"mobile","samsung","sam","sung","man","mango","icecream","and","go","i","like","ice","cream"};
    string INPUTSTR="samsungandmango";
    int N= INPUTSTR.size();
    int Size= sizeof(ARR)/sizeof(ARR[0]);
    cout<<MAINFUNC(INPUTSTR, N, ARR, Size, 0, 1);
    
    
                           
                           

    return 0;
}

