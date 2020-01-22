#include<iostream>
#include<cmath>
using namespace std;
double average(int *a,int n)
{
    double avg=0;
    for (int i=0; i<n; i++)
    {
        avg=avg+a[i];
    }
    avg=avg/n;
    cout<<avg;
    return avg;
}
void mod_arr(int a[])
{
    int n=(sizeof(a)/sizeof(*a));
    double avg=average(a,n);
    for (int i=0; i<n; i++)
    {
        if (a[i]<avg)
        {
            a[i]=round(avg);
        }
    }
}

int main()
{



}
