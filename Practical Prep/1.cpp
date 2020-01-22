#include<iostream>
#include<cmath>
using namespace std;
float triangleArea(float a)
{
    if(a>0)
    {
        float A=(sqrt(3)*(pow(a,2)))/4;

        return A;
    }
}
float triangleCircumference(float a)
{
    float C=3*a;
    return C;
}

int main()
{
    int k,isFirst=1;
    cout<<"How many times do you want me to calculate?";
    cin>>k;
    float z,smallestArea=0;
    for(int i=0; i<k; i++)
    {
        cout<<"What's your parameter - side of the triangle?";
        cin>>z;
        if(z<=0)
        {
            break;
        }
        cout<<"The triangle area is "<<triangleArea(z)<<endl;
        if(i==0)
            smallestArea=triangleArea(z);
        if(smallestArea>triangleArea(z))
        {
            smallestArea=triangleArea(z);
        }
        cout<<"Triangle circumference is "<<triangleCircumference(z)<<endl;
    }
    cout<<endl<<"The smallest area we had was "<<smallestArea<<endl;
}
