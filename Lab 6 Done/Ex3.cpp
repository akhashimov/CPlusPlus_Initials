#include<iostream>
using namespace std;
int main()
{
    while(1==1)
    {
        int choice,amount;


            do
            {
                cout<<"Choose the currency conversion: "<<endl;
                cout<<"1 > USD to PLN"<<endl;
                cout<<"2 > PLN to USD"<<endl;
                cout<<"3 > EURO to PLN"<<endl;
                cout<<"4 > PLN to EURO"<<endl;
                cout<<"5 > UZS to PLN"<<endl;
                cout<<"6 > PLN to UZS"<<endl;
                cout<<"Your choice: ";
                cin>>choice;
            }
            while(choice<1 or choice>6);

            char* choices[]={"USD","PLN","EURO","PLN","UZS","PLN"};
            char* choices2[]={"PLN","USD","PLN","EURO","PLN","UZS"};
            double choices3[]={3.9,0.26,4.28,0.23,0.000407,2457};

            do
            {
                cout<<"Enter the amount in "<<choices[choice-1]<<": ";
                cin>>amount;
            }
            while(amount<=0);
            double finally=amount*choices3[choice-1];
            cout<<amount<<" "<<choices[choice-1]<<" = "<<finally<<" "<<choices2[choice-1]<<endl<<endl;

    }
}
