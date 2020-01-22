#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void random_array(int *a,int n,int p,int q){
for (int i=0;i<n;i++){
 a[i]=p+rand()%((q+1)-p);
 cout<<a[i]<<endl;
}
}
void swap_integers(int a,int b){
int temp=a;
a=b;
b=temp;
}
void reverse_array(int *a,int n){
for (int i=0;i<n/2;i++){
    int temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
    cout<<a[i]<<" "<<a[n-1-i]<<" ";
}
}

int main(){
srand(time(NULL));
int arr[20];
random_array(arr,10,0,10);
reverse_array(arr,4);

}
