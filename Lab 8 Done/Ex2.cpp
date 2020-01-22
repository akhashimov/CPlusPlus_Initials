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
            arr[i]=a+rand()%(b-a);
                   cout<<arr[i]<<" ";
        }
        cout<<endl;
        for (int i=0; i<n; ++i)
        {
            for (int j=i; j<n; ++j)
            {
                if(arr[i]==arr[j])
                {
                    cout<<arr[i]<<" : "<<arr[j]<<"! Number "<<arr[i]<<" recurs , and first occurrence is at index "<<i<<endl;
                }
            }
        }

    }
}
