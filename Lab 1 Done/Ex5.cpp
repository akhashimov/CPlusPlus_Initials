#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Please give the sides of triangle : ";
    cin>>a;
    cout<<" ";
    cin>>b;
    cout<<" ";
    cin>>c;
    cout<<" "<<endl;
    if (a==b){
        cout<<a<<" = "<<b<<endl<<"The triange is isosceles"<<endl;
        
        }
    else if (b==c){
        cout<<b<<" = "<<c<<endl<<"The triange is isosceles"<<endl;
        
        }
    else if (a==c){
        cout<<a<<" = "<<c<<endl<<"The triange is isosceles"<<endl;
        
        }
    else {
        cout<<"The given triange is not isosceles";
        }
    return 0;
    }

