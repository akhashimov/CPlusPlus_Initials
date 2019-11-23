#include<iostream>
#include <cstdlib>
#include <ctime>
#include<stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    while (true)
    {
        int a,b,arr[20],M;
        cout<<"Give me the interval's [a,b] a= ";
        cin>>a;
        cout<<"Give me the interval's [a,b] b= ";
        cin>>b;
        do
        {
            cout<<"Give me the number of largest numbers you want to display: ";
            cin>>M;
        }
        while(M<0 or M>20);
        for (int z=0; z<20; z++)
        {
            arr[z]=a+rand()%((b-a)+1);
            cout<<"#"<<z+1<<"= "<<arr[z]<<endl;
        }




        int larg1[M],coef2[M],coefoflowest,lowestinthearray;
        for (int i=0;i<M;++i){
            larg1[i]=arr[i];
            coef2[i]=i;
        }
        for (int k=M; k<20; ++k)
        {
            lowestinthearray=larg1[0];
            coefoflowest=0;
            for (int i=0; i<M; ++i)
            {
                cout<<"Comparing |"<<lowestinthearray<<"| and "<<larg1[i]<<endl;
                if (larg1[i]<lowestinthearray)
                {
                    lowestinthearray=larg1[i];
                    coefoflowest=i;
                    cout<<"Lowest now: "<<lowestinthearray<<endl;
                }
            }


            if (arr[k]>lowestinthearray)
            {   cout<<"CHANGED: "<<larg1[coefoflowest];
                larg1[coefoflowest]=arr[k];
                cout<<" TO "<<larg1[coefoflowest]<<" INDEX CHANGED FROM "<<coef2[coefoflowest]<<" TO ";
                coef2[coefoflowest]=k;
                cout<<coef2[coefoflowest]<<endl;
            }
            cout<<"------------------------"<<endl;
        }
        //sorting
        int tempD;
        for (int z=0;z<M;z++){
        for (int i=0;i<M;i++){
            if (larg1[i]>larg1[i+1] && i!=M-1){
            tempD=larg1[i];
            larg1[i]=larg1[i+1];
            larg1[i+1]=tempD;
            }
        }}





        cout<<"The largest numbers "<<M<<" numbers of the array are:"<<endl;
        for (int i=M-1; i>=0; --i)
        {
            cout<<M-i<<"."<<"Number with Index "<<coef2[i]+1<<" : "<<larg1[i]<<" ;"<<endl;
        }

    }

    return 0;
}

