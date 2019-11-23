#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int arraySize=10;
    int arrayName[arraySize];
    cout<<"Enter "<<arraySize<<" integers.\n";
    for(int i=0;i<arraySize;++i)
    {
        cout<<setw(2)<<i+1<<": ";
        cin>>arrayName[i];
    }
    cout<<"\nList of "<<arraySize<<" integers:\n\n";
    for(int i=0; i<arraySize; ++i)
        cout<<arrayName[i]<<"\t";
    return 0;
}
