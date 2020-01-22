#include <iostream>
using namespace std;

int main()
{
    const int numofRows=3;
    const int numofColumns=4;

    int A[numofRows][numofColumns]= {{1,2,3,4},{6,10,-44,5},{-10,9,12,6}};

    cout<<"Matrix "<<numofRows<<"x"<<numofColumns<<" size\n";
    for(int i=0; i<numofRows; ++i)
    {
        for(int j=0; j<numofColumns; ++j)
            cout<<A[i][j]<<"\t";
        cout<<endl;
    }
    int sumofRows[numofRows],sumofColumns[numofColumns];
    for (int i=0;i<numofRows;i++){
        sumofRows[i]=0;
    }
    for (int i=0;i<numofColumns;i++){
        sumofColumns[i]=0;
    }
    for (int i=0;i<numofRows;i++){
        for (int j=0;j<numofColumns;j++){
            sumofRows[i]+=A[i][j];
        }
    }

    for (int i=0;i<numofColumns;i++){
        for (int j=0;j<numofRows;j++){
            sumofColumns[i]+=A[j][i];
        }
    }
    cout<<"Sum of rows:"<<endl;
    for (int i=0;i<numofRows;i++){
        cout<<"#"<<i+1<<":"<<sumofRows[i]<<endl;
    }
    cout<<"Sum of columns:"<<endl;
    cout<<"#1\t"<<"#2\t"<<"#3\t"<<"#4\t"<<endl;
        for (int i=0;i<numofColumns;i++){
        cout<<sumofColumns[i]<<"\t";
    }
}

