#include<iostream>
using namespace std;
int main()
{
    double colories_per_minute=3.6,colories_burned=0;
    int minute=0;
cout<<GImme the number;
    cin>>colories_per_minute;
    for (int i=0;i<=30;++i){
        ++minute;
        colories_burned=colories_per_minute*minute;
        if (minute%5==0){
            cout<<"Minute: "<<minute<<" Colories burned: "<<colories_burned<<endl;
        }
    }
    return 0;
}
