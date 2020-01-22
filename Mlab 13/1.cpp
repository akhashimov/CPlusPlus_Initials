#include<iostream>
using namespace std;
void count_occurances(int *a,int sizeofarr,int x){
    int counter=0;
    for(int i=0;i<sizeofarr;i++){
        if(a[i]=x){
            counter++;
        }
    }
    cout<<counter<<endl;
}
void find_integer(int *a,int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]=x){
            cout<<i<<endl;
            break;
        }
    }
}
int count_less(int *a,int n,int x){
    int counter=0;
    for(int i=0;i<n;++i){
        if(a[i]<x){
            counter++;
        }
    }
    cout<<counter<<endl;
    return counter;
}
void largest_less(int *a,int n,int x){
    int temp,isitfirst=1;
    for(int i=0;i<n;++i){
        if(a[i]<x && isitfirst==1){
                temp=a[i];
                isitfirst=0;
                continue;
            }
        if(a[i]<x && a[i]>temp){
            temp=a[i];
        }
    }
    cout<<temp;
}
int main(){
    int *a;
    a=new int[1];
    cout<<a[3];

}
