#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;
void roll_dices(){
    int tester1=1;
    while(tester1==1){
    int arr[5];
    srand(time(nullptr));
    int tester=0;
    for(int i=0;i<5;i++){
        arr[i]=rand()%6+1;
        cout<<arr[i]<<" ";
        if(i>0){
            if(arr[i]!=arr[i-1]){
                cout<<"Try again!"<<endl;
                tester=1;
                break;
            }
        }
    }
    if(tester==0){
    cout<<endl<<"Yahtzee! Five times of "<<arr[0]<<endl;
    tester1=0;
    }
}}

int main(){



}
