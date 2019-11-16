#include<iostream>
using namespace std;
int main(){
    int n=0,m=0;
    while (n<=0){
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Up to number: ";
    cin>>m;}
    for (int i=1;i<=m;++i){
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
    }
return 0;
}
