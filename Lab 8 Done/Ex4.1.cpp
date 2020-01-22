#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
    srand(time(NULL));
    int n,a,b,first,last;
    cout<<"What is n?";
    cin>>n;
    cout<<"What is a?";
    cin>>a;
    cout<<"What is b?";
    cin>>b;
    int arr[n];
    if (n>0)
    {
        cout<<"Numbers from the range["<<a<<";"<<b<<"]"<<endl;
        for(int i=0; i<n; ++i)
        {
            arr[i]=a+rand()%((b-a)+1);
            cout<<arr[i]<<" ";
            if ((i+1)%5==0)
            {
                cout<<endl;
            }
        }
        cout<<endl;
        int temp=0;
        for (int i=1; i<=n; ++i)
        {
            if (i!=n)
            {
                arr[i]=arr[i-1];
            }
            else
            {
                arr[0]=arr[n-1];
            }
        }
        for(int i=0; i<n; ++i)
        {
            cout<<arr[i]<<" ";
            if ((i+1)%5==0)
            {
                cout<<endl;
            }
        }
    }
}


