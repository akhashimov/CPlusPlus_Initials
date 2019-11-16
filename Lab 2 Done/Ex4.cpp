#include<iostream>
using namespace std;
int main(){
    double a,b;
    cout<<"Welcome to business ANALyzer!"<<endl<<"Enter how much you spent: ";
    cin>>a;
    cout<<endl<<"Now enter how much you made: ";
    cin>>b;
    if (b>a){
        cout<<"You made profit ! Your profit is: "<<b-a<<"This is "<< ((b/a)-1)*100<<"% rise";
        }
    else if (b<=a) {
        if (a=b){
            cout<<"You lost your time"<<endl;
            }
        cout<<"You lose ! Your loss is:"<<a-b;
        }
     return 0;  
    }
