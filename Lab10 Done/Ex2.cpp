#include<iostream>
#include<cmath>
using namespace std;
double isit(double a,double b)
{
    if (a>0 && b>0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{double x,y;
cout<<"X:";
cin>>x;
cout<<"Y:";
cin>>y;
if (isit(x,y)){
    cout<<"Yes it is possible to build a right triangle with the given sides!";
}
else{
    cout<<"No it is not possible to built a right triangle with the given sides!";
}

}
