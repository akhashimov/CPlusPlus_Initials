#include<iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,d,x1,x2;
    cout<<"Hey ! Wanna solve something like ax^2+bx+c ? Let's start then . Gimme the a you got : ";
    cin>>a;
    cout<<"And your b: ";
    cin>>b;
    cout<<"Finally c:";
    cin>>c;
    cout<<"As you see it is super easy! "<<endl;
    d=(b*b)-(4*(a*c));
    if (d<0) {
        cout<<"Hey, actually this one got no real answers ";
        }
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    if (x1=x2){
        cout<<"You got only one possible real answer :"<<x1;
        }
    else {
        cout<<"Here are your  answers: " << x1<<" and "<<x2;
        }
    
    return 0;
    }

