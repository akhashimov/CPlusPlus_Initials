#include<iostream>
using namespace std;
void start_matrix()
{   int n,pos,odd,first=1,highest;
    while(true)
    {

        cout<<"Ur Number:";
        cin>>n;

        if(first==1)
        {
            highest=n;
            first=0;
        }
        if(n==0){
            cout<<"zero"<<endl;
            break;
        }
        cout<<n;
        if(n>0)
        {
            pos=1;
            cout<<" is positive";
        }
        else
        {
            pos=0;
            cout<<" is negative";
        }
        if(n%2==0)
        {
            odd=0;
            cout<<" and even."<<endl;
        }
        else
        {
            odd=1;
            cout<<" and odd."<<endl;
        }
        if(n>highest)
        {
            highest=n;
        }
    }
    cout<<"The largest number entered was "<<highest<<endl;
}


int main()
{
    start_matrix();




}
