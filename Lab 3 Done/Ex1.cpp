#include<iostream>
using namespace std;
int main(){
    double step=1.5,ocean_level=1.5;
    int start=1,finish=25,i;
    cout<<"Enter the number of years you want: ";
    cin>>finish;
    for (i=start;i<=finish;++i){
        cout<<"Year: "<<start<<" Ocean level: "<<ocean_level<<endl;
        ocean_level=ocean_level+step;
        ++start;
        }
    return 0;
    }
