#include<iostream>
#include<cmath>
using namespace std;
bool triangle(int x,int y,int z){
    if (x+y>z &&y+z>x&&x+z>y){
        int S=(x+y+z)/2;
        int A=sqrt(S*(S-x)*(S-y)*(S-z));
        cout<<"The circumference is "<<x+y+z<<endl<<"The area is "<<A<<endl;

        return true;
    }
return false;
}

int main(){
triangle(3,4,5);
}
