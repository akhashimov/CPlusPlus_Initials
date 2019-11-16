#include<iostream>
using namespace std;
int main(){
    while (1==1){
        int a=-1;
        while (a<0)
     {
        cout<<"Give me a non-negative integer: "<<endl;
        cin>>a;
    }
        int x=0;
        while (a>10){
            x=x+a%10;
            a=a/10;
            cout<<"Current sum: "<<x<<endl;
        }
        x=x+a%10;
        a=a/10;
        cout<<"Current sum: "<<x<<endl;
    }
return 0;
}
