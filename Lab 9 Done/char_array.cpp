#include <iostream>
using namespace std;

int main()
{
    const int n=10;
    char sentence[n];
    cout<<"Give a sentence: ";
    cin.get(sentence,n);
    cout<<"Your sentence is: "<<sentence<<endl;

    cin.ignore(100,'\n');

    char x;
    cout<<"Give a character: ";
    cin>>x;
    cout<<"Your character is: "<<x<<endl;

    return 0;
}
