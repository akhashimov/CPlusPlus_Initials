#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"You want me to answer if the year is leap or not ? No problem ! Gimme the year: ";
    cin>>a;
    if (a%400 == 0){
        cout<<"Yes ! "<<a<<" is a leap year!";
        }
    else if (a%100 == 0){
        cout<<"No . Not really . "<<a<<" is not a leap year.";
        }
    else if (a%4 == 0){
        cout<< "Yes. As obvious it is, "<<a<<" is a leap year.";
        }
    else {
        cout<<"I believe it was obvious that this year is not leap. Ok , anyway.";
        }
    return 0;
    }
