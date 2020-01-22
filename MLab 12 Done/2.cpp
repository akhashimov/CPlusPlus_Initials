#include<iostream>
using namespace std;
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
            cout<<arr[i][j]<<"";
        }
        cout<<endl;
    }
}



int main(){



}
