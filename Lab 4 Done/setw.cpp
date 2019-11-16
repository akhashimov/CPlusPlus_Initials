#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,step;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of step ";
    cin>>step;
    cout<<"\n--------------------\n";
    cout<<setw(8)<<"a"<<setw(8)<<"b"<<endl;
    cout<<"--------------------\n";
    while(a<b)
    {
        cout<<setw(8)<<a<<setw(8)<<b<<endl;
        a=a+step;
        b=b-step;
    }
    cout<<"--------------------\n";
    cout<<"After the while loop\n"<<setw(8)<<a<<setw(8)<<b<<endl;
    return 0;
}