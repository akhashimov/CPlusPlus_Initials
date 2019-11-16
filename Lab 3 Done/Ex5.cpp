
#include<iostream>
using namespace std;
int main(){
    
    int a,b;
    while(1==1){
    cout<<"Gimme the number: ";
    cin>>a;
    cout<<"Gime the second number: ";
    cin>>b;
    if (a>b){
        
        
        for (b;(a+1)!=b;++b){
            cout<<b<<" ";
            
        }
    }
    else if (a<b){
        
        for (a;a!=(b+1);++a){
            cout<<a<<" ";
            
        }
        
    }
    else {
        cout<<a;
        
    }
    }
    return 0;
    
}

