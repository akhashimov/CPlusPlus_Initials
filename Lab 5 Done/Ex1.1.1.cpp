#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char choice;
    do
    {   string input;
        cout<<"Learn to walk before you run!"<<endl;
        cout<<"Do you want me to do it again ?(y/n)"<<endl;
        getline(cin,input);
        choice=input[0];
    }
    while(choice=='y');
}

