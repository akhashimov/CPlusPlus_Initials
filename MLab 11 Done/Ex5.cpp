#include<iostream>

using namespace std;



int main(){
int num_arr[]={105,122,156,322,232};
double *foo;
foo=new double[5];
int sum=0;
for(int i=0;i<5;++i){
    sum+=num_arr[i];
}
for(int i=0;i<5;++i){
    foo[i]=(100*num_arr[i])/sum;
    cout<<foo[i]<<endl;
}
delete[] foo;
}

