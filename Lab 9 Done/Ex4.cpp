#include<iostream>
using  namespace std;
int main(){
    string hello,chararr[50],mychar;
    cout<<"Give me your sentence:"<<endl;
    getline(cin,hello);
    cout<<"What character do u want me to count ?"<<endl;
    cin>>mychar;
    int len=hello.length(),num=0,lownum=0;
    for (int i=0;i<len;++i){
        chararr[i]=hello.substr(i,1);
        }
    for (int i=len-1;i>=0;--i){
        if(mychar==chararr[i]){
            num++;
        }
        if (chararr[i]>="a"&&chararr[i]<="z"){
            lownum++;

            char c=chararr[i][0];
            c=toupper(c);
            chararr[i]=c;
            cout<<chararr[i];
        }
        }
        cout<<endl;
    for (int i=0;i<len;i++){
        cout<<chararr[i];
    }
    cout<<endl<<"Total number of occurrences of "<<mychar<<" is "<<num<<endl;
    cout<<"Total number of lowercase numbers :"<<lownum<<endl;
    }

