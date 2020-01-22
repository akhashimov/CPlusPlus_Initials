#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    srand(time(NULL))
    int n,a,b,first,last;
    cout<<"What is n?";
    cin>>n;
    cout<<"What is a?";
    cin>>a;
    cout<<"What is b?";
    cin>>b;
int arr[n];
    if (n>0){
            cout<<"Numbers from the range["<<a<<";"<<b"]"<<endl;
        for(int i=0;i<n;++i){
            arr[i]=a+rand()%(b-a)
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for (int i=0;i<n;++i){
            if(arr[i]>0){
                    first=i;
                break;
            }
        }
        cout<<"The first positive integer in the array is "<<arr[first]<<" with the index of "<<first<<endl;
        for (int i=n-1;i>=0;--i){
            if(arr[i]>0){
                last=i;
                break;
            }
        }
        cout<<"The last positive integer in the array is "<<arr[last]<<" with the index of "<<last;
    cout<<endl<<"Positive integers in the array above :"<<endl;
    for(int i=0;i<n;++i){
        if (arr[i]>0){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    }

}
