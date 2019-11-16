#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int radius,height;
    string input;
    char decision;
    const double pi=3.141592;
    do
    {
        do
        {
            cout<<"Give me the radius of the cylinder: ";
            cin>>radius;
        }
        while(radius<=1);
        do
        {
            cout<<"Give me the height of the cylinder: ";
            cin>>height;
        }
        while(height<=1);
        cout<<"What do you want me to display ? V for volume of the cylinder , A for area of the surface: "<<endl;
        cin>>input;
        cout<<input<<endl;
        decision=input[0];
        cout<<decision<<endl;
        if (decision=='V'or decision=='v')
        {
            cout<<"Volume of the cylinder is "<<height*2*pi*radius<<endl;
        }
        else if(decision=='A' or decision == 'a')
        {
            cout<<"Base area of the cylinder is "<<2*pi*radius<<endl;
        }
        else
        {
            cout<<"You gave an unknown answer! Program stops."<<endl;
        }
    }
    while(decision=='A' or decision=='V' or decision=='a' or decision=='v');
}
