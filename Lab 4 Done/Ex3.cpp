#include<iostream>
using namespace std;
int main(){
    while(1==1){
        int a=0,b;
        while (a<=0){
            cout<<"Give me at most 6-digit number: "<<endl;
            cin>>a;
        }
        while (a>10){
            b=a%10;
            a=a/10;
            if (a%10!=b){
                cout<<"Not all digits are equal"<<endl;
                break;
            }
        }
        if (a==b){
            cout<<"All digits are equal"<<endl;}


    }
return 0;

}
