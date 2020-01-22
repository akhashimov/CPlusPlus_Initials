#include <iostream>
using namespace std;

int main()
{
    const int numofRows=3;
    const int numofColumns=4;
    int A[numofRows][numofColumns]= {{1,2,3,4},{6,10,-44,5},{-10,9,12,6}};
int sumofRows[numofRows],sumofColumns[numofColumns],largestInColumns[numofColumns],lowestInColumns[numofColumns],largestInRows[numofRows],lowestInRows[numofRows];
    for (int i=0; i<numofRows; i++)
    {
        sumofRows[i]=0;
        largestInRows[i]=A[i][0];
        lowestInRows[i]=A[i][0];
    }
    for (int i=0; i<numofColumns; i++)
    {
        sumofColumns[i]=0;
        largestInColumns[i]=A[0][i];
        lowestInColumns[i]=A[0][i];
    }
    for (int i=0; i<numofRows; i++)
    {
        for (int j=0; j<numofColumns; j++)
        {
            sumofRows[i]+=A[i][j];
            if(largestInRows[i]<A[i][j])
            {
                largestInRows[i]=A[i][j];
            }
            if(lowestInRows[i]>A[i][j])
            {
                lowestInRows[i]=A[i][j];
            }
        }
    }

    for (int i=0; i<numofColumns; i++)
    {
        for (int j=0; j<numofRows; j++)
        {
            sumofColumns[i]+=A[j][i];
            if(largestInColumns[i]<A[j][i])
            {
                largestInColumns[i]=A[j][i];
            }
            if(lowestInColumns[i]>A[j][i])
            {
                lowestInColumns[i]=A[j][i];
            }
        }
    }

    cout<<"Matrix "<<numofRows<<"x"<<numofColumns<<" size\n";
    for(int i=0; i<numofRows; ++i)
    {
        for(int j=0; j<numofColumns; ++j)
            cout<<A[i][j]<<"\t";
        cout<<"|"<<sumofRows[i]<<"\t|";
        cout<<lowestInRows[i]<<"\t|"<<largestInRows[i]<<"\t|"<<endl;
    }
    cout<<"________________________________\t|\t|\t|"<<endl;
    for (int i=0; i<numofColumns; i++){
        cout<<sumofColumns[i]<<"\t";
    }

    cout<<"Sum\t|\t|\t|"<<endl;
cout<<"________________________________________"<<endl;
    for (int i=0; i<numofColumns; i++){
        cout<<lowestInColumns[i]<<"\t";
    }
    cout<<"\tLowest\t|\t|"<<endl;
cout<<"________________________________________________\t|"<<endl;
for (int i=0; i<numofColumns; i++){
        cout<<largestInColumns[i]<<"\t";
    }

    cout<<"\t\tLargest\t|"<<endl;
cout<<"_________________________________________________________"<<endl;
}


