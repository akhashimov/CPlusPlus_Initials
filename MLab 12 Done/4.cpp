#include<iostream>
using namespace std;
bool isSymmetic(int arr[5][5],int rows,int columns){
    for(int i=0;i<rows;i++){
        for(int j=i;j<columns;j++){
            if(arr[i][j]!=arr[j][i]){
                return false;
            }
        }
    }
return true;
}

int main(){
int arr[5][5]={{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
cout<<isSymmetic(arr,5,5);



}

