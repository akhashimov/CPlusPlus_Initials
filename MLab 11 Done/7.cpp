#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;
void randomize_array(int n){
    int *arr;
    arr=new int[n];
    for(int i=0;i<n;++i){
        cout<<i<<" :";
        cin>>arr[i];
    }
    srand(time(nullptr));
    int *newarr;
    newarr=new int[n];
    int j=0;
    while(j<n){
        int k=rand()%n;
        int contornot=1;
        for(int z=0;z<j;z++){
            if(newarr[z]==k){
                contornot=0;
                break;
            }
        }
        if(contornot==1){
            newarr[j]=k;
            j++;
            cout<<arr[k]<<endl;
        }
    }

}
int main(){
    randomize_array(10);


}
