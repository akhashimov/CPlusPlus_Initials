#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double budget,expenses,input;
    cout<<"Enter your budget for the month: "<<endl;
    cin>>budget;
    do {
        cout<<"Your expense(0 to end the program): "<<endl;
        cin>>input;
        expenses+=input;
    }
    while (input!=0);
    cout<<"Your total expenses are :"<<expenses<<endl;
    budget-=expenses;
    if (budget==0){
        cout<<"You kept your expenses to your budget.";
    }
    else if (budget<0){
        cout<<"You kept your expenses higher than your budget. Where did you get the money ?";
    }
    else{
        cout<<"You kept your expenses lower than your budget.";
    }
}
