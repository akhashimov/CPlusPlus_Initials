#include<iostream>
using namespace std;

int main(){
    while (1==1){
        int a=0,b=0,i=2,i2=0;
        int Is1[100],Is2[100];
        while (a<=0){
        cout<<"Give me the first integer: "<<endl;
        cin>>a;}
        while(b<=0){
        cout<<"Give me the second integer: "<<endl;
        cin>>b;}
        while (a!=1){
            if (a%i==0){
                while(a%i==0){
                cout<<a<<"a while i"<<i<<endl;
                a=a/i;
                Is1[i2]=i;
                ++i2;}
            }
            ++i;
            cout<<a<<"a i"<<i<<endl;
        }
        i=2;
        i2=0;
        while (b!=1){
            if (b%i==0){
                while(b%i==0){
                cout<<b<<" "<<i<<endl;
                b=b/i;
                Is2[i2]=i;
                ++i2;}
            }
            ++i;
            cout<<b<<"b i"<<i<<endl;
        }
        cout<<endl<<endl<<endl<<endl<<endl;
        for (int z = 10;z>=0;z--){
        cout<<Is1[z]<<endl;
        cout<<Is2[z]<<endl;
        }
    }
return 0;
}
