

#include <iostream>
using namespace std;
int main()
{
    double Celsius;
    double Kelvin;
    double Fahrenheit;
    cout<< "Temperature in Celcius : ";
    cin>> Celsius;
    Kelvin = Celsius + 273.15;
    Fahrenheit = 32 + (9/5)*Celsius;
    cout<< "--------------------------------------------------------------"<<endl<<"Kelvin ="<< Kelvin <<endl<<"Fahrenheit = "<<Fahrenheit<<endl<<"--------------------------------------------------------------"<<endl;
    return 0;
}


