#include<iostream>
using namespace std;
int main()
{
    double myarr[10],lowest=0,highest=0,sum=0;
    cout<<"Please enter salaries of the given 10 employees"<<endl;
    for (int i=0; i<=9; ++i)
    {
        cout<<"Employee #"<<i+1<<":";
        cin>>myarr[i];
        if(myarr[i]<lowest)
        {
            lowest=myarr[i];
        }
        if(myarr[i]>highest)
        {
            highest=myarr[i];
        }
        sum=sum+myarr[i];
        if (i==0)
        {
            lowest=myarr[i];
            highest=myarr[i];
        }
    }
    cout<<"The size of the array is "<<sizeof(myarr)/sizeof(*myarr)<<endl;
    cout<<"Lowest salary : "<<lowest<<endl<<"Highest salary : "<<highest<<endl<<"Average of salaries: "<<sum/10<<endl;
    cout<<endl<<"List of employees who with salaries greater than average";
    for (int i=0; i<=9; ++i)
    {
        if(myarr[i]>sum/10)
        {
            cout<<"Employee #"<<i<<": "<<myarr[i]<<endl;
        }
    }

}

