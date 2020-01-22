#include<iostream>
using namespace std;
bool perfect(int x)
{
    int myarr[100],k=0,z=1,init_num=x;
    do
    {
        if(x%z==0)
        {
            x/=z;
            myarr[k]=z;
            k++;
        }
        z++;
    }
    while(z<init_num);
    int arrsum=0;
    for (int i=0; i<k; i++)
    {
        arrsum+=myarr[i];
    }
    if (arrsum==init_num)
    {
        return true;
    }
    return false;
}
int main()
{
    int a=2,counter=0;
    while (counter<3)
    {   bool k=perfect(a);
        if(k==true)
        {
            cout<<"FOUND ONE :"<<a<<endl;
            counter++;
        }
        a++;
        cout<<a<<endl;
    }
}
