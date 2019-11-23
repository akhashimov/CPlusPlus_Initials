#include<iostream>
#include <cstdlib>
#include <ctime>
#include<stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    while (true){
    int a,b,arr[20];
    cout<<"Give me the interval's [a,b] a= ";
    cin>>a;
    cout<<"Give me the interval's [a,b] b= ";
    cin>>b;
    for (int z=0; z<20; z++)
    {
        arr[z]=a+rand()%((b-a)+1);
        cout<<"#"<<z+1<<"= "<<arr[z]<<endl;
    }
    int high1,high2,temp1,temp2,high3,co1,co2,co3;
    for (int k=0;k<20;++k){
        if (k==0){
            high1=arr[k];
            high2=arr[k];
            high3=arr[k];
            co1=k;
            co2=k;
            co3=k;
        }
        if (arr[k]>high1){
            temp1=high1;
            high1=arr[k];
            temp2=high2;
            high2=temp1;
            high3=temp2;

            temp1=co1;
            co1=k;
            temp2=co2;
            co2=temp1;
            co3=temp2;
        }
    }
    cout<<"Three largest numbers: "<<endl<<"1.Number #"<<co1<<" in the array: "<<high1<<endl<<"2.Number #"<<co2<<" in the array: "<<high2<<endl<<"3.Number #"<<co3<<" in the array: "<<high3<<endl;
    }
    return 0;
}
