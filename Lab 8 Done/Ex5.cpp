#include<iostream>


using namespace std;
int main()
{
    int arr[100],cont=0;
    cout<<"Enter your numbers (Enter -1 to escape and process)"<<endl;
    do
    {
        cout<<"Your number:";
        cin>>arr[cont];
        cont++;
    }
    while(arr[cont-1]!=-1);
    int stop=0,c2=0,arr2[cont],arr3[cont];
    for (int k=0;k<cont;++k){
        arr2[k]=-1;
        arr3[k]=0;
    }
    for (int i=0;i<cont;++i){
        stop=0;
        for (int j=0;j<cont;++j){
        if(arr[i]==arr2[j]){
            stop=1;
            arr3[j]++;
            break;
        }}
        if (stop==0){
            arr2[c2]=arr[i];
            arr3[c2]++;
            c2++;
        }
    }
    for (int i=0;i<c2;++i){
        cout<<"#"<<i+1<<": "<<arr2[i]<<" occurs "<<arr3[i]<<" times."<<endl;
    }
}


