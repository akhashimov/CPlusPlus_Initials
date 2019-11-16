#include<iostream>
#include <cstdlib>
#include <ctime>
#include<stdlib.h>
using namespace std;
int main(){
    while(1==1){
    srand(time(NULL));
    int guess,correct=rand()%101,tries=rand()%11;
        for(int i=tries;i>=0;i--){
    if (i==0){
            cout<<"The correct answer was "<<correct<<endl;
    }
    cout<<"Guess the number. You have "<<i<<" tries. From 0-100:  ";
    cin>>guess;
    if(guess==correct){
        cout<<"You are right ! The number is "<<correct<<endl;
        cout<<"It took "<<tries-i<<" tries to guess it!"<<endl;
        break;
    }
    else if (guess<correct){
        cout<<"You took less !"<<endl;
    }
    else if (guess>correct){
        cout<<"You took much !"<<endl;
    }
    }
    }}

