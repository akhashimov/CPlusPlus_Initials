#include<iostream>
using namespace std;

void taxcalc(double gross, int taxrate)
{
    double dbtaxrate=1+taxrate*0.01;
    double tax=gross-gross/dbtaxrate;
    cout<<"The tax is "<<tax;

}

int main()
{
taxcalc(51.96,5);
}
