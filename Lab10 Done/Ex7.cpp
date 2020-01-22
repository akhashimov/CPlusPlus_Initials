#include<iostream>
using namespace std;

void annualenergyconsumption(int hrsaday,int daysayear,int capacityinwatts,double priceperkwtinzlt){
    double consum=hrsaday*daysayear*(capacityinwatts*0.001);
    cout<<consum<<endl;
    cout<<consum*priceperkwtinzlt<<endl;
}

int main()
{
    annualenergyconsumption(24,365,10,0.55);
}
