#include<iostream>
using namespace std;
void swap_rows(int arr[20][20],int firstrow,int secondrow){
    for(int i=0;i<20;i++){
        int temp=arr[firstrow][i];
        arr[firstrow][i]=arr[secondrow][i];
        arr[secondrow][i]=temp;
    }
}
void swap_columns(int arr[20][20],int firstcolumn,int secondcolumn){
    for(int i=0;i<20;i++){
        int temp=arr[i][firstcolumn];
        arr[i][firstcolumn]=arr[i][secondcolumn];
        arr[i][secondcolumn]=temp;
    }
}

int main(){




}
