#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    while (1==1)
    {
        int base1,base2;
        string inputValue;
        do
        {
            cout<<"Base Converter 1.0 (from base 2 up to base 16) to base 10"<<endl
                <<"Base of the input:";
            cin>>base1;
        }
        while(base1<2 or base1>16);
        cout<<"Enter the value: "<<endl;
        cin>>inputValue;
        if(base1==base2)
        {
            cout<<"Your answer: "<<inputValue<<endl;
            continue;
        }
        int z,sum=0;
        //universal base converter
        for (int i=inputValue.size()-1; i>=0; --i)
        {
            cout<<"String = "<<inputValue.substr(i,1)<<endl;
            cout<<"i = "<<i<<endl;
            if (inputValue.substr(i,1)=="0")
            {
                z=0;
            }
            if (inputValue.substr(i,1)=="1")
            {
                z=1;
            }
            if (inputValue.substr(i,1)=="2")
            {
                z=2;
            }
            if (inputValue.substr(i,1)=="3")
            {
                z=3;
            }
            if (inputValue.substr(i,1)=="4")
            {
                z=4;
            }
            if (inputValue.substr(i,1)=="5")
            {
                z=5;
            }
            if (inputValue.substr(i,1)=="6")
            {
                z=6;
            }
            if (inputValue.substr(i,1)=="7")
            {
                z=7;
            }
            if (inputValue.substr(i,1)=="8")
            {
                z=8;
            }
            if (inputValue.substr(i,1)=="9")
            {
                z=9;
            }
            if (inputValue.substr(i,1)=="A")
            {
                z=10;
            }
            if (inputValue.substr(i,1)=="B")
            {
                z=11;
            }
            if (inputValue.substr(i,1)=="C")
            {
                z=12;
            }
            if (inputValue.substr(i,1)=="D")
            {
                z=13;
            }
            if (inputValue.substr(i,1)=="E")
            {
                z=14;
            }
            if (inputValue.substr(i,1)=="F")
            {
                z=15;
            }
            cout<<"Z="<<z<<endl;
            cout<<"Power ="<<inputValue.size()-i-1<<endl;
            cout<<"Sum is equal to "<<sum;
            sum=sum+z*pow(base1,inputValue.size()-i-1);
            cout<<" + "<<z<<"*"<<base1<<"^"<<inputValue.size()-i-1<<"("<<pow(base1,inputValue.size()-i-1)<<")"<<"="<<sum<<endl<<"---------------------------------"<<endl;
        }
        ;
    }

}

