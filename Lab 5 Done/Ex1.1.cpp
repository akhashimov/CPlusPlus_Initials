#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char choice;
    do
    {
        cout<<"Learn to walk before you run!";
        cout<<"Do you want me to do it again ?(y/n)";
        cin>>setw(1)>>choice;
    }
    while(choice=='y');
}
