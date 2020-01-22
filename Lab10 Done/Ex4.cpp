#include<iostream>
using namespace std;
void rectange(int height,int width,char k){
cout<<endl;
for (int x=0;x<height;x++){
    for(int y=0;y<width;y++){
        cout<<k;
    }
    cout<<endl;
}
}
int main(){
rectange(4,10,'*');
}
