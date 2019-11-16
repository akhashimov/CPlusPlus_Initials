#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int hrswkd=0;

    do{
    cout<<"How many hours did you work last week?(-1 means to stop)"<<endl;
    cin>>hrswkd;
    cout<<"Your number of leave hours for this week is : "<<round(2+0.1*hrswkd)<<endl;
    }
    while(hrswkd!=-1);

}
