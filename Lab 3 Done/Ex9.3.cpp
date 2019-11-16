#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"Your n: ";
    cin>>n;
    for (int i=1;i<=n;i++){
    if (i%2!=0){
    for (int t=1;t<=(n-i)/2;t++){
    cout<<" ";
    }
    for (int z=1;z<=i;++z){
        cout<<"*";
    }
    for (int t=1;t<=(n-1)/2;t++){
        cout<<" ";
    }
    cout<<endl;
    }
    }
}

