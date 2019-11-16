#include<iostream>
using namespace std;
int main(){
    while(1==1){
    int n=0,counter=0;
    cout<<"Give me the positive integer: ";
    cin>>n;
    cout<<n<<" = "<<1;
    for (int i=2;i<=n;++i){
        while (n%i==0){
            cout<<"*"<<i;
            n=n/i;
            counter++;
        }

    }
    if (counter<2){
            cout<<" (prime number)"<<endl;
        }
    else{
        cout<<endl;
    }
    }
}
