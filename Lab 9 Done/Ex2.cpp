#include<iostream>
using  namespace std;
int main(){
    string hello;
    string chararr[50];
    cout<<"Give me your sentence:"<<endl;
    getline(cin,hello);
    int len=hello.length();
    for (int i=0;i<len;++i){
        chararr[i]=hello.substr(i,1);
        }
    for (int i=len-1;i>=0;--i){
        cout<<chararr[i];
        if(chararr[i]==" "){
            cout<<" ";
        }
    }

}
