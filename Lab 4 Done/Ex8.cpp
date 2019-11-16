#include<iostream>
using namespace std;
int main(){
    int i=0,s=0,s2=0;
    cout<<"Enter your date of birth : ";
    for (int z=0;z<3;z++){
        cin>>i;
        while(i>9){
            s=s+i%10;
            i=i/10;
            cout<<"S: "<<s<<endl;
        }
        s=s+i;}
        while (s>9){
            if (s%10==(s/10)%10){
                    s2=s;
                    break;
                }
            s2=s2+s%10;
            s=s/10;
        }
        s2=s2+s;
        cout<<"S2: "<<s2<<endl;
    }
