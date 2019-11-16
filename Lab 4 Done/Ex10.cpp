#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    while(1==1)
    {
        int i=1,N=0,counter=0,s=0,z=0;
        cout<<"Give me the positive integer";
        cin>>N;
        while(N>9)
        {   i=N%10;
            cout<<"i="<<i<<" N="<<N<<endl;
            if (i==9)
            {
                counter=counter+1;
                cout<<s<<" + "<<(i+2)*(pow(10,counter))<<" = "<<s+(i+2)*pow(10,counter)<<endl;
                s=s+(i+2)*(pow(10,counter));
                cout<<"S= "<<s<<endl;
            }
            else
            {   cout<<s<<" + "<<(i+2)*(pow(10,counter))<<" = "<<s+(i+2)*pow(10,counter)<<endl;
                s=s+(i+2)*(pow(10,counter));
                counter=counter+1;
                cout<<"S= "<<s<<endl;
            }
            cout<<"S= "<<s<<endl;
            N=N/10;
        }

        z=((N+2)*pow(10,counter));
        cout<<"Z= "<<z<<endl;
            cout<<"S= "<<s<<endl;

        s=s+((N+2)*pow(10,counter))+1;
        cout<<"S= "<<s<<endl;;
    }
}
