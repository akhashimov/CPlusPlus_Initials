#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
void generate_array(int arr[][20],int rows,int columns,int rangefrom,int rangeto)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            arr[i][j]=rand()%rangeto+rangefrom;
        }
    }
}
void display_array(int arr[][20],int rows,int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sum_rows(int arr[][20],int rows,int columns){
    int *sums;
    sums=new int[20];
    for(int i=0;i<20;i++){
        sums[i]=0;
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            sums[i]+=arr[i][j];
        }
        cout<<endl<<sums[i]<<endl;
    }
}
void transpose_2d_array(int arr[20][20],int rows,int columns){
    for(int i=0;i<rows;i++){
        for(int j=i;j<columns;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    srand(time(nullptr));
    int arr[20][20];
    generate_array(arr,20,20,1,9);
    display_array(arr,20,20);
    sum_rows(arr,20,20);
    transpose_2d_array(arr,20,20);
}
