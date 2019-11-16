#include<iostream>
using namespace std;
int main(){
    int input,prev_num=0,G,counter1=1,counter2=1;
    cout<<"What's the G? "<<endl;
    cin>>G;
    cout<<counter1<<".Give me the integer: ";
    cin>>prev_num;
    counter1++;
    do{
        cout<<counter1<<".Give me the integer: ";
        cin>>input;
        if (input*prev_num>G){
            cout<<"Pair #"<<counter2<<": "<<input<<" "<<prev_num<<endl;
        }
        counter1++;
        prev_num=input;
    }
    while(input!=0);
    cout<<"READING ENDS";
}
