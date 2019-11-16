#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(nullptr));
    int a=rand();
    cout<<setw(32)<<"Random number from [0,"<<RAND_MAX<<"]: "<<a<<endl;
    a=rand()%201;
    cout<<setw(40)<<"Random number from [0,200]: "<<a<<endl;
    a=rand()%201-100;
    cout<<setw(40)<<"Random number from [-100,100]: "<<a<<endl;
    double b=(rand()%201-100)/10.0;
    cout<<setw(40)<<"Random number from [-10,10]: "<<b<<endl;
    return 0;
}
