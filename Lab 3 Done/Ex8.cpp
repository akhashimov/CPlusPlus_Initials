#include<iostream>
using namespace std;
int main(){
    int a,b,Q,s=0,c=0;
    cout<<"What the interval ? A:"<<endl;
    cin>>a;
    cout<<"B:"<<endl;
    cin>>b;
    cout<<"What number should it be divisible ?";
    cin>>Q;
    for (int i=a;i<=b;i++){
        if (i%Q==0){
            s=s+i;
            ++c;
        }
    }
    int avg=s/c;
    cout<<"Arithmetic average of the numbers divisible by "<<Q<<" on the interval "<<a<<" and "<<b<<" is "<<avg;
return 0;
}
