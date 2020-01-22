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
    int arr[n],arr2[n];
    if (n>0)
    {
        cout<<"Numbers from the range["<<a<<";"<<b<<"]"<<endl;
        for(int i=0; i<n; ++i)
        {
            arr[i]=a+rand()%((b-a)+1);
            cout<<arr[i]<<" ";
            if ((i+1)%5==0){
                cout<<endl;
            }
        }
        cout<<endl;
        for (int i=0; i<n; ++i)
        {
            if (i==(n-1))
            {
                arr2[0]=arr[n-1];
            }
            else
            {
                arr2[i+1]=arr[i];
            }
        }
        for(int i=0; i<n; ++i)
        {
            cout<<arr2[i]<<" ";
            if ((i+1)%5==0){
            cout<<endl;
            }
        }

    }
}

