#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter three integers: ";
    cin>>a;
    cout<<" ";
    cin>>b;
    cout<<" ";
    cin>>c;
    double d=((a+b+c)/3);
    cout<<" "<<endl<<"Sum is "<<a+b+c<<endl<<"Average is "<<d<<endl<<"Product is "<<(a*b*c)<<endl;
    return 0;
}
