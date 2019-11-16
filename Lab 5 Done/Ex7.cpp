#include<iostream>
using namespace std;
int main(){
    int num1,num2,input,counter1=1,counter2=1;
    cout<<counter1<<".Give me the number(0 to stop the program): ";
    cin>>num1;
    if(num1==0){
        return 0;
    }
    counter1++;
    cout<<counter1<<".Give me the number(0 to stop the program): ";
    cin>>num2;
    if (num2==0){
        return 0;
    }
    counter1++;
    do{
        cout<<counter1<<".Give me the number(0 to stop the program): ";
        cin>>input;
        if (input>num2 && num2>num1){
            cout<<"Triplet #"<<counter2<<" : "<<num1<<" "<< num2<<" "<<input<<endl;
            counter2++;
        }
        num1=num2;
        num2=input;
        counter1++;
    }
    while(input!=0);
    cout<<"READING ENDS";
}
