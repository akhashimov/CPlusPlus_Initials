#include<iostream>
using namespace std;
int main(){
    int n=0;
    while (n<=0){
    cout<<"Let's print out initial N numbers. What's your N? "<<endl;
    cin>>n;
    }
    for (int i=1;i<=n;i=i+2){
        cout<<i<<endl;
    }

}

