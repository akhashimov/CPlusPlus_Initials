#include<iostream>
#include<cmath>

using namespace std;

double volume(double r,double h)
{
    const double PI  =3.141592653589793238463;
    if(r>0&&h>0)
    {
        double V=PI*pow(r,2)*h;
        return V;
    }
    else
    {
        cout<<endl<<"Wrong data !"<<endl;
        return 0;
    }
}
double surfacearea(double r,double h)
{
    const double PI  =3.141592653589793238463;
    if(r>0&&h>0)
    {
        double S=2*PI*pow(r,2)+2*PI*r*h;
        return S;
    }
    else
    {
        cout<<endl<<"Wrong data !"<<endl;
        return 0;
    }
}
int main()
{
    int wrongDataCalc=0,iterationNum;
    char again='y';
    double greatestSurface=0;
    do
    {
        cout<<"How many times do you want me to repeat ?"<<endl;
        cin>>iterationNum;
        double r,h;
        for(int i=0;i<iterationNum;i++){
            cout<<"Enter the radius";
            cin>>r;
            cout<<"Enter the height";
            cin>>h;
            if(r>0&&h>0){
                if(i==0){
                    greatestSurface=surfacearea(r,h);
                }
                if(greatestSurface<surfacearea(r,h))
                    greatestSurface=surfacearea(r,h);
                cout<<"The volume of the cylinder is "<<volume(r,h)<<endl;
                cout<<"The surface area of the cylinder is "<<surfacearea(r,h)<<endl;
            }
            else{
                //break;
                wrongDataCalc++;
                cout<<"Wrong data!"<<endl;
            }

        }
        cout<<"Total data given:"<<iterationNum<<" Number of corrects: "<<iterationNum-wrongDataCalc<<"Number of wrongs: "<<wrongDataCalc<<endl;;
        //if(r<0||h<0)break;
        cout<<"Do you want to do it again ? (y/n)";
        cin>>again;
    }
    while(again=='y'||again=='Y');
}
