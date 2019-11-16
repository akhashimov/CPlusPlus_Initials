
#include<iostream>
using namespace std;
int main(){
        double membership=2500;
    for (int i=1;i<=6;++i){
        
        membership=membership*1.04;
        cout<<"Year: "<<i<<" Membership cost: "<<membership<<endl;
        
        
    }
    
    return 0;
}
