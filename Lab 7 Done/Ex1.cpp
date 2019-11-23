#include<iostream>
using namespace std;
int main(){
    int integers[5],sum=0,c=0;

    for (int i=0;i<=4;++i){
        cout<<"Give me a value: ";
        cin>>integers[i];
        sum=sum+integers[i];
    }
    double arithAvg;
    arithAvg=sum/5;
    cout<<"Arithmetic Average is "<<arithAvg<<endl;
    for (int i=0;i<=4;++i){
        if(integers[i]>arithAvg){
            cout<<integers[i]<<" is greater than average"<<endl;
            ++c;
        }
    }
}
