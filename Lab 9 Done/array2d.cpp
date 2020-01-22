#include <iostream>
using namespace std;

int main()
{
    const int numofRows=5;
    const int numofColumns=3;

    int A[numofRows][numofColumns]= {{1,2,3},{6,10,-44},{33,4,5},{-10,9,12},{77,99,-8}};

    cout<<"Matrix "<<numofRows<<"x"<<numofColumns<<" size\n";
    for(int i=0; i<numofRows; ++i)
    {
        for(int j=0; j<numofColumns; ++j)
            cout<<A[i][j]<<"\t";
        cout<<endl;
    }

    return 0;
}
