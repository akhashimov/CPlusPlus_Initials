#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int arraySize=10;
    int arrayName[arraySize];
    srand(time(NULL));
    for(int i=0;i<arraySize;++i)
    {
        arrayName[i]=-5+rand()%11-5;
    }
    cout<<"\nList of "<<arraySize<<" integers:\n\n";
    for(int i=0; i<arraySize; ++i)
        cout<<arrayName[i]<<"\t";
    return 0;
}
