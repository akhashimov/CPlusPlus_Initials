#include<cmath>
#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
void generate_array(int *a,int sizea,int rangefrom,int rangeto){
    for(int i=0;i<sizea;i++){
    a[i]=rand()%rangeto+rangefrom;
    }
}
double mean(int *a,int sizea,int rangefrom,int rangeto){
    int sum=0;
    for(int i=0;i<sizea;i++){
        if(a[i]>=rangefrom && a[i]<=rangeto)
            sum+=a[i];
    }
    return sum/sizea;
}
int sumofodds(int *a,int sizea){
    int sum=0;
    for(int i=0;i<sizea;i++){
        if(a[i]%2!=0){
            sum+=a[i];
        }
    }
    return sum;
}

int main(){
srand(time(nullptr));

}
