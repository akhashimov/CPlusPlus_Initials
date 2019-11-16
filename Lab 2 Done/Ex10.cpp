#include<iostream>
using namespace std;

int main()
{
    int day=0,day2=0,month=0,month2=0,year=0,year2=0,febmax=0,febmax2=0,days=0;
    cout<<"Please enter the first day DD";
    cin>>day;
    cout<<"Please enter the first  month MM";
    cin>>month;
    cout<<"Please enter the first year YYYY";
    cin>>year;
    cout<<"Please enter the second day DD";
    cin>>day2;
    cout<<"Please enter the second month MM";
    cin>>month2;
    cout<<"Please enter the second year YYYY";
    cin>>year2;

    if (year%400==0)
    {
        febmax=29;
    }
    else if (year%100==0)
    {
        febmax=28;
    }
    else if (year%4==0)
    {
        febmax=29;
    }
    else
    {
        febmax=28;
    }
    if (month==2)
    {
        while (day>febmax or day<1)
        {
            cout<<"You have entered incorrect day. Please renter the day: ";
            cin>>day;
        }

    }
    else if (month==4 or month==6 or month==9 or month==11 )
    {
        while (day<1 or day>30)
        {
            cout<<"You have entered incorrect day. Please renter the day: ";
            cin>>day;
        }
    }
    if (year2%400==0)
    {
        febmax2=29;
    }
    else if (year2%100==0)
    {
        febmax2=28;
    }
    else if (year2%4==0)
    {
        febmax2=29;
    }
    else
    {
        febmax2=28;
    }
    if (month2==2)
    {
        while (day2>febmax2 or day2<1)
        {
            cout<<"You have entered incorrect day. Please renter the day: ";
            cin>>day;
        }

    }
    else if (month2==4 or month2==6 or month2==9 or month2==11 )
    {
        while (day2<1 or day2>30)
        {
            cout<<"You have entered incorrect day. Please renter the day: ";
            cin>>day2;
        }
    }
    while (year2>year)
    {
        cout<<"You have entered incorrect sequence of dates,enter year again: ";
        cin>>year2;
        cout<<"Enter month again: ";
        cin>>month2;
        cout<<"Enter day again: ";
        cin>>day2;
        while(month2>month)
        {
            cout<<"You have entered incorrect sequence of dates,enter month again: ";
            cin>>month2;
        }
        while(day2>day)
        {
            cout<<"You have entered incorrect sequence of dates,enter day again: ";
            cin>>day2;
        }
    }
    while(month2>month)
    {
        cout<<"You have entered incorrect sequence of dates,enter month again: ";
        cin>>month2;
    }
    while(day2>day)
    {
        cout<<"You have entered incorrect sequence of dates,enter day again: ";
        cin>>day2;
    }


    return 0;
}
