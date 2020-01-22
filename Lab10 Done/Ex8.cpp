#include<iostream>
using namespace std;

void print_pyramid(int height){
for (int i=1;i<=height;i++){
    int h=(height*2-i*2)/2;
    for(int z=0;z<h;z++){
    cout<<" ";
}
for(int z=0;z<i;z++){
    cout<<"*";
}
for(int z=0;z<i;z++){
    cout<<"*";
}
for(int z=0;z<h;z++){
    cout<<" ";
}
cout<<endl;
}
}

int main()
{
print_pyramid(6);
}
