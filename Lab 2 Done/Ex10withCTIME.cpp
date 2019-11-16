#include<iostream>
#include<ctime>

using namespace std;
int main(){
    time_t const n=time(0);
    char* now=ctime(&n);
}
