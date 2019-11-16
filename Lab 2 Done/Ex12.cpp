#include<iostream>
using namespace std;

int main()
{
    while(1==1)
    {
        int day=0,month=0,year=0,febmax=0,days=0,maxdays=0;
        cout<<"Please enter the day DD";
        cin>>day;
        cout<<"Please enter the month MM";
        cin>>month;
        cout<<"Please enter the year YYYY";
        cin>>year;

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
            maxdays=febmax;
        }
        else if (month==4 or month==6 or month==9 or month==11 )
        {
            while (day<1 or day>30)
            {
                cout<<"You have entered incorrect day. Please renter the day: ";
                cin>>day;
            }
            maxdays=30;
        }
        else
        {
            maxdays=31;
        }
        int counter_year=2001;
        while (counter_year<year)
        {
            if (year%400==0)
            {
                days=days+366;
            }
            else if (year%100==0)
            {
                days=days+365;
            }
            else if (year%4==0)
            {
                days=days+366;
            }
            else
            {
                days=days+365;
            }
            ++counter_year;
        }
        for (int i=1; i<month; ++i)
        {
            if (i==2)
            {

                days=days+febmax;

            }
            else if (i==4 or i==6 or i==9 or i==11)
            {

                days=days+30;

            }
            else
            {

                days=days+31;
            }
        }

        days=days+day;

        string cur_month("");
        switch(month)
        {
        case 1:
            cur_month.assign("January");
            break;
        case 2:
            cur_month.assign("February");
            break;
        case 3:
            cur_month.assign("March");
            break;
        case 4:
            cur_month.assign("April");
            break;
        case 5:
            cur_month.assign("May");
            break;
        case 6:
            cur_month.assign("June");
            break;
        case 7 :
            cur_month.assign("July");
            break;
        case 8:
            cur_month.assign("August");
            break;
        case 9:
            cur_month.assign("September");
            break;
        case 10:
            cur_month.assign("October");
            break;
        case 11:
            cur_month.assign("November");
            break;
        case 12:
            cur_month.assign("Decemter");
            break;

        }
        cout<<" "<<cur_month<<" "<<year<<endl;
        cout<<"Mon "<<"Tue "<<"Wed "<<"Thu "<<"Fri "<<"Sat "<<"Sun "<<endl;

        int startofmonth=((days-(day))%7);
        cout<<startofmonth;
        switch(startofmonth)
        {
        case 1 :
            cout<<"    ";
            break;
        case 2 :
            cout<<"        ";
            break;
        case 3 :
            cout<<"            ";
            break;
        case 4 :
            cout<<"                ";
            break;
        case 5 :
            cout<<"                    ";
            break;
        case 6 :
            cout<<"                        ";
            break;
        }


        for (int z=1; z<=maxdays; ++z)
        {
            if (z==day)
            {
                cout<<"|";
            }
            else
            {
                cout<<" ";
            }
            cout<<z;
            if (z>9)
            {
                if (z==day)
                {
                    cout<<"|";
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                if (z==day)
                {
                    cout<<"| ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            if ((z+startofmonth)%7==0)
            {
                cout<<endl;
            }
        }
        cout<<endl;

    }
}
