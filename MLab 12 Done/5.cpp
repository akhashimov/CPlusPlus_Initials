#include<iostream>
using namespace std;
void print_spiral(int arr[5][5],int rows,int columns){
    for(int i=0;i<rows;i++){
        for(int j=i;j<rows-i;j++){
            cout<<arr[i][j]<<" ";
        }
        for(int j=i+1;j<columns-i;j++){
            cout<<arr[j][rows-i-1]<<" ";
        }
        for(int j=rows-2-i;j>i;j--){
            cout<<arr[rows-1-i][j]<<" ";
        }
        for(int j=columns-1-i;j>i;j--){
            cout<<arr[j][i]<<" ";
        }
    }
}
void display_array(int arr[][5],int rows,int columns)
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
int main(){
int arr[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
display_array(arr,5,5);
cout<<endl<<endl;
print_spiral(arr,5,5);

}
