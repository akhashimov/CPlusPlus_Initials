#include<iostream>
using namespace std;
int main(){
    int myarr[5],z;
    for (int i=0;i<=4;++i){
        cout<<"Give me a value:";
        cin>>myarr[i];
    }
    z=myarr[0];
    for (int i=0;i<=4;++i){
        if (myarr[i]>z){
            z=myarr[i];
        }
    }
    cout<<"The largest value in the given array is "<<z;
}
