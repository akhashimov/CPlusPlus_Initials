#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int arraySize;
    cout<<"Give the size of array: ";
    cin>>arraySize;
    if(arraySize>0)
        {
            int *arrayName=new int[arraySize];
            srand(time(NULL));
            for(int i=0; i<arraySize; ++i)
                {
                    arrayName[i]=-5+rand()%11;
                }
            cout<<"\nList of "<<arraySize<<" integers:\n\n";
            for(int i=0; i<arraySize; ++i)
                {
                    cout<<arrayName[i]<<"\t";
                }
            delete []arrayName;
        }
    else
        {
            cout<<"\nWrong size\n";
        }
    return 0;
}
