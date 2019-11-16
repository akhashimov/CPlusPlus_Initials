#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    while(1==1)
    {
        int population,days;
        double percentage_increase;
        cout<<"Enter the initial population size of the organisms ";
        cin>>population;
        cout<<"Enter daily population percentage increase: ";
        cin>>percentage_increase;
        cout<<"The number of days of the increase : ";
        cin>>days;
        for (int i=1; i<=days; ++i)
        {
            cout<<"Day "<<i<<" Population: ";
            population=round(population*(1+(percentage_increase/100)));
            cout<<population<<endl;
        }
    }
}
