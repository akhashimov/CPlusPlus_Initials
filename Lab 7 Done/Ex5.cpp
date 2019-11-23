#include<iostream>
using namespace std;
int main()
{
    double myarr[6],lowest=0,highest=0,sum=0;
    cout<<"Please enter the scores (from 0.00 to 10.0)"<<endl;
    for (int i=0; i<=5; ++i)
    {
        do
        {
            cout<<"Score #"<<i+1<<":";
            cin>>myarr[i];
        }
        while(myarr[i]<0 or myarr[i]>10);
        if(myarr[i]<lowest)
        {
            lowest=myarr[i];
        }
        if(myarr[i]>highest)
        {
            highest=myarr[i];
        }
        if (i==0)
        {
            lowest=myarr[i];
            highest=myarr[i];
        }
    }

    cout<<"Lowest score : "<<lowest<<endl<<"Highest score : "<<highest<<endl;
    for (int i=0; i<=5; ++i)
    {
        if (myarr[i]==lowest or myarr[i]==highest)
        {
            myarr[i]=0;
        }
        sum=sum+myarr[i];
    }
    cout<<"Average of scores: "<<sum/4<<endl;
}
