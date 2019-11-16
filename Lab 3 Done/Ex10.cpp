#include<iostream>
using namespace std;
int main(){
    int N=0,s=0;
    cout<<"Your number of initial N's:"<<endl;
    cin>>N;
    for (int i=2;i<=N;++i){
        if (i%10==1 or i%10==2 or i%10==7){
            cout<<i<<"+"<<s<<"=";
            s=s+i;
            cout<<s<<endl;
        }
    }
    cout<<s;
}
