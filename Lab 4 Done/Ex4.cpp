#include<iostream>
using namespace std;
int main(){
    while(1==1){
    int z=0,sum=0,check_sum;
    while (z<10 or z>999999){
    cout<<"Give me at least 2-digit number , at most 6-digit number: "<<endl;
    cin>>z;
    }
    check_sum=z%10;
    z=z/10;
    while (z>10){
    sum=sum+z%10;
    z=z/10;
    }
    sum=sum+z%10;
    z=z/10;
    if (sum%10!=check_sum){
        cout<<check_sum<<" and "<<sum<<" --->>> "<<"No !"<<endl;
    }
    else {
        cout<<"Yes !"<<endl;
    }

    }
return 0;
}
