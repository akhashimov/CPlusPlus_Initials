#include<iostream>
using namespace std;
int main()
{
    int N=0,S=0;
    cout<<"Your N: "<<endl;
    cin>>N;
    for (int i=1; i<=N; ++i)
    {
        cout<<i<<endl;
        int curnum=i;
        int sumofdigs=0;
        while(curnum>9)
        {
            sumofdigs=sumofdigs+curnum%10;
            curnum=curnum/10;
        }
        sumofdigs=sumofdigs+curnum;
        int counter=0;

        for (int z=1; z<=sumofdigs; ++z)
        {
            while (sumofdigs%z==0 && z!=1)
            {
                sumofdigs=sumofdigs/z;
                counter++;
                if(counter>1)
                {
                    break;
                }
                cout<<"Counter"<<counter<<endl;
            }

        }
        if (counter<=1)
        {
            cout<<S<<" + "<<i<<" = ";
            S=S+i;
            cout<<S<<endl;
        }
    }
    cout<<S;
}
