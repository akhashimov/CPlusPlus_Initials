#include <iostream>
using namespace std;
int main()
{   double a,b;
    cout<<"Enter your first number: ";
    cin>>a;
    cout<< "Enter your second number: ";
    cin>>b;
    if (a>b){
        cout<<"Your first number is greater than the second one ";
        }
    else if (a<b){
        cout<<"Your second number is greater than the first one ";
        }
    else if (a==b){
        cout<<"Your numbers are equal";
        }
    
    return 0;    
    }
