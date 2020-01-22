#include<iostream>
#include<cmath>
using namespace std;

double hypotenuse(double a, double b)
{
    double h=sqrt(pow(a,2)+pow(b,2));
    return h;
}
int main()
{   double a,b;
    cout<<"What's a?";
cin>>a;
cout<<"What's b?";
cin>>b;
    cout<<"\t\tThe hypotenuse is "<<hypotenuse(a,b);

}
