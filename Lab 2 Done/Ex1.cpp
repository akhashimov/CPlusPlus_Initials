#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    
    cout<<"Enter price per item: ";
    cin>>a;
    cout<<"Enter quantity: ";
    cin >> b ;
    c=a*b;
    if (c>=5000){
        
        c=0.9*c;
        }
    cout<<"Total expense: "<<c;
    return 0;
    }

