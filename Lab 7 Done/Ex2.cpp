#include<iostream>
using namespace std;
int main(){
    int myarr[5],sum=0,c=0;
    for (int i=0;i<=4;++i){
        cout<<"["<<i+1<<"] :";
        cin>>myarr[i];
        if(myarr[i]%2==0){
            sum=sum+myarr[i];
            ++c;
        }
    }
        cout<<"Arithmetic average of even values is "<<sum/c<<endl;

return 0;
}
