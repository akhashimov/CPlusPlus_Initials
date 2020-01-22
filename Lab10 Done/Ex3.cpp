#include<iostream>
using namespace std;
int gcd(int,int);
int gcd(int x, int y)
{
    while (x!=y)
    {
        if(x>y)
        {
            x-=y;
        }
        else
        {
            y-=x;
        }
    }
    return x;
}
int lcm(int x,int y)
{   int init_x=x,init_y=y;
    int z;
    if (y>x){
        int temp=y;
        y=x;
        x=temp;
    }

    while (x%y==0){
        x/=y;
    }
    return z;
}
int main()
{
    int a,b;
    cout<<"Give me A:";
    cin>>a;
    cout<<"Give me B:";
    cin>>b;
    cout<<gcd(a,b)<<endl<<lcm(a,b);

}
