#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int arraySize=10;
    int arrayName[arraySize]= {22,67,34,22,33,66};
    for(int i=0; i<arraySize; ++i)
        cout<<"Element "<<setw(2)<<i+1<<" value "<<setw(3)<<arrayName[i]<<endl;
    return 0;
}
