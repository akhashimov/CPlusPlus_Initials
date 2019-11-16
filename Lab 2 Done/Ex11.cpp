#include<iostream>
using namespace std;

int main()
{
    while(1==1)
    {
        int day=0,day2=0,month=0,month2=0,year=0,year2=0,febmax=0,febmax2=0,days=0;

        //DATE INPUT 1
        cout<<"Please enter the first YEAR YYYY (first date must be earlier than second)"<<endl;
        cin>>year;
        while(month<1 or month>12)
        {
            cout<<"Please enter the first date's(earlier one) MONTH MM(1-12)"<<endl;
            cin>>month;
        }
        cout<<"PPlease enter the first date's(earlier one) DAY DD"<<endl;
        cin>>day;
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
                cout<<"You have entered incorrect day. Please enter the first date's(earlier one) DAY: "<<endl;
                cin>>day;
            }
        }
        else if (month==4 or month==6 or month==9 or month==11 )
        {
            while (day<1 or day>30)
            {
                cout<<"You have entered incorrect day. Please enter the first date's(earlier one) DAY: "<<endl;
                cin>>day;
            }
        }

        //DATE INPUT 2
        cout<<"Please enter the second date's(later one) DAY YYYY"<<endl;
        cin>>year2;
        if (year2<year)
        {
            cout<<"You have entered incorrect sequence of dates,reenter both dates again ! "<<endl;
            continue;
        }
        while(month2<1 or month2>12)
        {
            cout<<"Please enter the second date's(later one) DAY MM(1-12)"<<endl;
            cin>>month2;
        }
        if(year2==year && month2<month)
        {
            cout<<"You have entered incorrect sequence of dates,reenter both dates again ! "<<endl;
            continue;
        }
        while(day2<1 or day2>31){
        cout<<"Please enter the second date's(later one) DAY DD"<<endl;
        cin>>day2;}
        if(year2==year && month2==month&& day2<day)
        {
            cout<<"You have entered incorrect sequence of dates,reenter both dates again ! "<<endl;
            continue;
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
                cout<<"You have entered incorrect day. Please enter the second date's(later one) DAY: "<<endl;
                cin>>day2;
            }

        }
        else if (month2==4 or month2==6 or month2==9 or month2==11 )
        {
            while (day2<1 or day2>30)
            {
                cout<<"You have entered incorrect day. Please enter the second date's(later one) DAY: ";
                cin>>day2;
            }
        }

        //DATE COUNTER
        int counter_year=year+1;
        while (counter_year<year2)
        {
            if (year%400==0)
            {   cout<<days<<"+";
                days=days+366;
                cout<<366<<"="<<days<<endl;
            }
            else if (year%100==0)
            {
                cout<<days<<"+";
                days=days+365;
                cout<<365<<"="<<days<<endl;
            }
            else if (year%4==0)
            {
                cout<<days<<"+";
                days=days+366;
                cout<<366<<"="<<days<<endl;
            }
            else
            {
                cout<<days<<"+";
                days=days+365;
                cout<<365<<"="<<days<<endl;
            }
            ++counter_year;
        }
        for (int i=1; i<month2; ++i)
        {
            if (i==2)
            {
                cout<<febmax2<<"+"<<days;
                days=days+febmax2;
                cout<<"="<<days<<endl;
            }
            else if (i==4 or i==6 or i==9 or i==11)
            {
                cout<<30<<"+"<<days;
                days=days+30;
                cout<<"="<<days<<endl;
            }
            else
            {
                cout<<31<<"+"<<days;
                days=days+31;
                cout<<"="<<days<<endl;
            }
        }
        cout<<day<<"+"<<days;
        days=days+day2;
        cout<<"="<<days<<endl;
        for (int i=1; i<month; ++i)
        {
            if (i==2)
            {
                cout<<febmax<<"-"<<days;
                days=days-febmax;
                cout<<"="<<days<<endl;
            }
            else if (i==4 or i==6 or i==9 or i==11)
            {
                cout<<30<<"-"<<days;
                days=days-30;
                cout<<"="<<days<<endl;
            }
            else
            {
                cout<<31<<"-"<<days;
                days=days-31;
                cout<<"="<<days<<endl;
            }
            cout<<day<<"-"<<days;
            days=days-day;
            cout<<"="<<days<<endl;


            cout<<"Total days are: "<<days<<endl;
        }
    }
    return 0;
}
