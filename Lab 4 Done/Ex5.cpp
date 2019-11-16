#include<iostream>
using namespace std;
int main(){
 while(1==1){
    int n=0,chs=0,chsa=0;
    while (n<10 or n>999999){
        cout<<"Enter the N: "<<endl;
        cin>>n;
    }
    chs=n%10;
    cout<<chs<<endl;
    n=n/10;
    while (n>9){
         chsa=chsa+n%10;
         n=n/10;
      }
    chsa=chsa+n;
    cout<<chsa<<endl;
    if (chsa==chs){
        cout<<"Correct ! The last digit is the checksum of all previous digits!";
    }
    else {
        cout<<"No ! The last digit is not the checksum of all previous digits!";
    }
}
}
