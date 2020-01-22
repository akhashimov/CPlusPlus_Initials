#include<iostream>
using namespace std;
void input_array(double *a,int n){
for (int i=0;i<n;i++){
    double z;
    cout<<i+1<<".";
    cin>>z;
    a[i]=z;
    cout<<endl;
}
}
double average(double *a,int n){
    double avg=0;
    for (int i=0;i<n;i++){
        avg=avg+a[i];
    }
    avg=avg/n;
    cout<<avg;
    return avg;
}
int main(){
double k[100];
input_array(k,20);
average(k,20);

}
