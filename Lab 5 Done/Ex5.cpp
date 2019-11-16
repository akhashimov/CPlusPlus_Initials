#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int counter=0 , counter1=0,counter2=0,input,s1=0,s2=0;
    do{
        cout<<"Give me your number(0 to end program): "<<endl;
        cin>>input;
        if (input>0){
            cout<<sqrt(input)<<endl;
            counter1++;
            s1+=input;
        }
        else if (input <0 ){
            cout<<pow(input,2)<<endl;
            s2+=input;
            counter2++;
        }
        counter++;
    }
    while(input!=0);
    cout<<"Of "<<counter<<" real numbers you gave in total"<<counter1<<" are positive and "<<counter2<<" are negative"<<endl<<endl<<"The total sum of the positive numbers is: "<<s1<<endl<<"The total sum of negative numbers is: "<<s2<<endl<<endl<<"Arithmetic average of positive numbers is: "<<s1/counter1<<endl<<"Arithmetic average of negative numbers is "<<s2/counter2;

}
