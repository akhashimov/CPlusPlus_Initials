#include<iostream>
using namespace std;

void taxcalc(double gross, int taxrate)
{
    double dbtaxrate=1+taxrate*0.01;
    double tax=gross-gross/dbtaxrate;
    cout<<"The tax is "<<tax<<endl;

}
void whatisgross(double net,int tax){
double gross=net*(1+tax*0.01);
cout<<gross<<endl;
}
void whatistaxrate(double net,double gross){
int taxrate=-100*(1-(gross/net));
cout<<taxrate<<"%";
}

int main()
{
taxcalc(51.96,5);
whatisgross(50,5);
whatistaxrate(50,55);
}
