#include<iostream>
using namespace std;

int main(){
    int day=0,month=0,year=0,febmax=0,days=0;
    cout<<"Please enter the day DD";
    cin>>day;
    cout<<"Please enter the month MM";
    cin>>month;
    cout<<"Please enter the year YYYY";
    cin>>year;

    while (year>2020){
        cout<<"You have entered incorrect year. Please reenter the year: ";
        cin>>year;
    }
    if (year%400==0){
        febmax=29;
    }
    else if (year%100==0){
        febmax=28;
    }
    else if (year%4==0){
        febmax=29;
    }
    else {
        febmax=28;
    }
    if (month==2){
        while (day>febmax or day<1){
            cout<<"You have entered incorrect day. Please renter the day: ";
            cin>>day;
        }

    }
    else if (month==4 or month==6 or month==9 or month==11 ){
        while (day<1 or day>30){
            cout<<"You have entered incorrect day. Please renter the day: ";
            cin>>day;
        }
    }

for (int i=1;i<month;++i){
    if (i==2){
        cout<<febmax<<"+"<<days;
        days=days+febmax;
        cout<<"="<<days<<endl;
    }
    else if (i==4 or i==6 or i==9 or i==11){
        cout<<30<<"+"<<days;
        days=days+30;
        cout<<"="<<days<<endl;
    }
    else {
        cout<<31<<"+"<<days;
        days=days+31;
        cout<<"="<<days<<endl;
    }

}
cout<<day<<"+"<<days;
days=days+day;
cout<<"="<<days<<endl;
cout<<"total days are: "<<days<<endl;
return 0;
}
