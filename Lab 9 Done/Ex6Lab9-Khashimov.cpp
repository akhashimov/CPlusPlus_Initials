#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
        string hello,chararr[100];
        cout<<"Give me the word you want to check:";
        getline(cin,hello);
        int len=hello.length(),dif=0;
        for (int i=0; i<len; i++)
        {
            if (hello.substr(i,1)==" ")
            {
                ++dif;
                continue;
            }
            chararr[i-dif]=hello.substr(i,1);
            if (chararr[i-dif]<="a"||chararr[i-dif]>="z")
            {
                chararr[i-dif]=tolower(chararr[i-dif][0]);
            }
        }

        int print=1;
        for (int i=0; i<len-dif; i++)
        {
            if (chararr[i]!=chararr[(len-dif-1)-i])
            {
                print=0;
                cout<<"The given word is not a palindrome! The error is: "<<chararr[i]<<" "<<chararr[(len-1)-i]<<endl;
            }
        }
        if (print==1)
        {
            cout<<"Yes ! ";
            for (int i=0; i<len-dif; i++)
            {
                cout<<chararr[i];
            }
            cout<<" is a palindrome !"<<endl;
        }
    }
    //Khashimov Akmalkhon
}
