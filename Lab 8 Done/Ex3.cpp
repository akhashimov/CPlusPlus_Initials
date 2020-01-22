#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int n,a,b;
    cout<<"What is n?";
    cin>>n;
    int arr[n],occ[11];
    if (n>0)
    {
        for(int i=0; i<n; ++i)
        {
            arr[i]=rand()%(11);
                   cout<<arr[i]<<" ; ";
        }
        for (int k=0;k<11;k++){
            occ[k]=0;
        }
        cout<<endl;
        for (int i=0; i<n; ++i)
        {
            occ[arr[i]]++;
        }
        for (int z=0;z<11;z++){
            cout<<"#"<<z<<" Occurances: "<<occ[z]<<endl;
        }

    }

}

