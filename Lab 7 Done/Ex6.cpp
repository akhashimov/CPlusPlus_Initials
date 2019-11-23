#include<iostream>
#include <cstdlib>
#include <ctime>
#include<stdlib.h>

using namespace std;
int main()
{
    int b[100],N;
    srand(time(NULL));
    for (int i=0; i<=99; ++i)
    {
        b[i]=0;
    }
    cout<<"Give me N:";
    cin>>N;
    int a[N];
    for (int z=0; z<N; z++)
    {
        a[z]=rand()%100;
        cout<<"#"<<z<<"= "<<a[z]<<"; ";
    }
    cout<<endl<<endl<<endl;
    for (int j=0; j<N; j++)
    {
        b[a[j]]++;
    }
    for (int r=0;r<100;++r){
        cout<<"#"<<r<<"= "<<b[r]<<endl;
    }
    return 0;
}
