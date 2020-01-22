#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int n,a,b;
    cout<<"What is n?";
    cin>>n;
    cout<<"What is a?";
    cin>>a;
    cout<<"What is b?";
    cin>>b;
    int arr[n],occ[n];
    for (int i=0; i<n; ++i)
    {
        arr[i]=-1;
    }
    if (n>0)
    {
        int temp,exists=0,tries=0,cont=0;
        for(int i=0; i<n; ++i)
        {
            exists=0;
            tries=0;
            do
            {
                temp=a+rand()%((b-a)+1);
                for (int j=i-1; j>=0; j--)
                {
                    if (temp==arr[j])
                    {
                        exists=1;
                        tries++;
                    }
                }
                if(tries>100)
                {
                    cout<<"Tries are more than 100 ! It is most possible that all the number: "<<temp<<" is already in the array."<<endl;
                    break;
                }
            }
            while(exists==1);
            if(exists==0)
            {
                arr[cont]=temp;
                cont++;
            }

        }
        cout<<"There are "<<cont<<" different numbers in the given range. They are:"<<endl;
            for (int i=0;i<cont;++i){
                cout<<arr[i]<<";";
            }
    }

}

