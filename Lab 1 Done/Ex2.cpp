#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    
    cout<<"Enter two integers"<<endl<<"a=";
    cin>> a;
    cout<<endl;
    cout<<"b=";
    cin>>b;
    double c = a/b;
    cout<<a<<"+"<<b<<"="<<a+b<<endl<<a<<"-"<<b<<"="<<a-b<<endl<<a<<"*"<<b<<"="<<a*b<<endl<<a<<"/"<<b<<"="<<c<<endl<<a<<"%"<<b<<"="<<a%b<<endl;
return 0;
}
