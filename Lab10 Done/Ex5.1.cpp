#include<iostream>
using namespace std;
void intpart(int a,int b){
cout<<a/b;
}
void fracpart(int a,int b){
double k=a/b;
int z=a/b;
k-=z;
cout<<k;
}
void spacesbetween(int x){
if (x >32767 || x<1){
    cout<<"Wrong number !";
}
else {
    int counter=0,z=x,intarr[counter];
    while (z>10){
        intarr[counter]=z%10;
        z=z/10;
        counter++;
    }
    intarr[counter]=z;
    counter++;
    for(int i=counter-1;i>=0;i--){
        cout<<intarr[i]<<" ";
    }
}
}

int main(){
spacesbetween(1234);
}
