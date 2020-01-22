#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    while(true)
    {
        srand(time(NULL));
        int n,a,b;
        cout<<"What is the total number of points ?";
        cin>>n;
        cout<<"Give the range of numbers [a,b]"<<endl<<"a=";
        cin>>a;
        cout<<"b=";
        cin>>b;
        double plane[2][n];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<2; j++)
            {
                plane[j][i]=a+rand()%(b-a-1);
            }
        }
        double eucdif=0,temp;
        for (int i=0; i<n; i++)
        {
            for (int j=i; j<n; j++)
            {
                temp=round((sqrt(pow((plane[0][i]-plane[0][j]),2.0)+pow((plane[1][i]-plane[1][j]),2.0)))*100)/100.0;
                if (temp>eucdif)
                {
                    eucdif=temp;
                    cout<<"Found new !"<<eucdif<<" #1 position: "<<i+1<<" #2 position: "<<j+1<<endl;
                }
            }
        }
        cout<<endl<<eucdif<<endl;
        cout<<"X:\t";
        for (int i=0; i<n; ++i)
        {
            cout<<plane[0][i]<<"\t";
        }
        cout<<endl<<"Y:\t";
        for (int i=0; i<n; ++i)
        {
            cout<<plane[1][i]<<"\t";
        }
    }
    //Khashimov Akmalkhon
}
