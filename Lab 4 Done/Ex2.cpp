#include<iostream>
using namespace std;
int main(){
    while (1==1){
        int a=0,x=100000;
        while (x>99999 or x<0){
        cout<<"Give me at most 5-digit number: ";
        cin>>x;}
        int init=x;
        while (x>10){
            a=a+x%10;
            x=x/10;
        }
        a=a+x;

        init=init*10+a%10;
        cout<<"New number: "<<init<<endl;
    }


}
