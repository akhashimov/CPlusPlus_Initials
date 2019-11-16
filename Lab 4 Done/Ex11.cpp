#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    while(1==1)
    {
        int i=1,N=0,counter=0,s=0,z=0,counter1=1;
        cout<<"Give me the positive integer";
        cin>>N;
        while(N>9)
        {   i=N%10;
            cout<<"i="<<i<<" N="<<N<<endl;
            if (i==9)
            {
                counter=counter+1;
                cout<<s<<" + "<<(i+counter1)*(pow(10,counter))<<" = "<<s+(i+counter1)*pow(10,counter)<<endl;
                s=s+(i+counter1)*pow(10,counter);

            }
            else
            {   cout<<"S= "<<s<<" + "<<(i+counter1)*(pow(10,counter))<<" = "<<s+(i+counter1)*pow(10,counter)<<endl;
                s=s+(i+counter1)*pow(10,counter);
                counter=counter+1;

            }
            counter1=counter1+1;
            cout<<"S= "<<s<<endl;
            N=N/10;
        }

        s=s+((N+counter1)*pow(10,counter))+1;
        cout<<"S= "<<s<<endl;;
    }
}
