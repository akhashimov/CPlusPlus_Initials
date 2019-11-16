#include<iostream>
using namespace std;
int main(){
    int day=0,days=0,salary_pd=10,salary_total=0;
    while (days>360 or days<1){
        cout<<"How many days  did the worker work (between 1 and 360) ?";
        cin>>days;
        
    }
    
        for (int i=0;i<=days;++i){
        ++day;
        salary_total=salary_total+salary_pd*day;
        cout<<"Day: "<<day<<"Salary today: "<<salary_pd<<" Total salary: "<<salary_total<<endl;
        ++salary_pd;}
    
    return 0;
}
