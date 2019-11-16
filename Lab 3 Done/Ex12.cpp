#include<iostream>
using namespace std;
int main(){
    double init_val=0,years=0,int_rate=0;
    cout<<"Enter initial value: ";
    cin>>init_val;
    cout<<"Enter the number of years: ";
    cin>>years;
    cout<<"Enter the interest rate: ";
    cin>>int_rate;

    cout<<"Is the capitalization monthly or yearly ?(m/y)";
    char cap;
    cin>>cap;
   if (cap=='y'){
    int_rate=1+int_rate/100;
    for (int i=1;i<=years;++i){
        init_val=init_val*int_rate;
        cout<<i<<" year, Value: "<<init_val<<endl;
    }
        }
    else if (cap=='m'){
        for (int i=1;i<=years*12;i++){
        init_val=init_val*(1+(int_rate/1200));
        cout<<i<<" month, Value: "<<init_val<<endl;
    }

}
}
