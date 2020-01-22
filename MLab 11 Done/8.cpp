#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;


void create_random_array(int arr[],int sizeofarr,int rangefrom,int rangeto)
{
    for(int i=0; i<sizeofarr; ++i)
    {
        arr[i]=rand()%rangeto+rangefrom;
    }
}
void sort_candidates(int arr[],int sizeofarr,bool newarr[])
{
    int sum=0;
    for(int i=0; i<sizeofarr; ++i)
    {
        sum+=arr[i];
    }
    int themean=sum/sizeofarr;
    cout<<"The mean is "<<themean<<endl;
    for(int i=0; i<sizeofarr; ++i)
    {
        if(arr[i]-themean>0)
        {
            newarr[i]=true;
        }
        else
        {
            newarr[i]=false;
        }
    }
}
void print_numberof(bool accepted,int arr[],int sizeofarr,bool sortedarr[])
{
    int firsts=0,seconds=0;
    for(int i=0; i<sizeofarr; i++)
    {
        if(sortedarr[i]==true)
        {
            firsts++;
        }
        else
        {
            seconds++;
        }
    }
    if(accepted==true)
    {
        cout<<"Number of accepted: "<<firsts<<endl;
    }
    else
    {
        cout<<"Number of rejected: "<<seconds<<endl;
    }
}
void print_candidates(bool accepted,int arr[],int sizeofarr,bool sortedarr[])
{
    int j=1;
    if(accepted=true)
    {
        cout<<"Accepted candidates"<<endl;
        for(int i=0; i<sizeofarr; i++)
        {
            if(sortedarr[i]==true)
            {
                cout<<j<<". Candidate number: "<<i<<" "<<arr[i]<<endl;
                j++;
            }

        }
    }
    else
    {
        cout<<"Rejected candidates:"<<endl;
        for(int i=0; i<sizeofarr; i++)
        {
            if(sortedarr[i]==false)
            {
                cout<<j<<".Candidate number: "<<i<<" "<<arr[i]<<endl;
                j++;
            }

        }
    }
}
void rank_candidates(int num_first_bests,int arr[],int sizeofarr)
{
    int *ids,*newarr;
    ids=new int[sizeofarr];
    newarr=new int[sizeofarr];
    for(int i=0;i<sizeofarr;++i){
        newarr[i]=arr[i];
    }
    for(int i=0; i<sizeofarr; i++)
    {
        ids[i]=i;
    }
    for(int i=0;i<sizeofarr;++i)
{
    for(int j=i+1; j<sizeofarr; j++)
    {
        if(newarr[i]>newarr[j])
        {
            int temp=newarr[i],temp2=ids[i];
            ids[i]=ids[j];
            ids[j]=temp2;
            newarr[i]=newarr[j];
            newarr[j]=temp;
            j=i+1;
        }
    }
}
    for(int i=0; i<sizeofarr; i++)
    {
        cout<<"#"<<i+1<<" Score: "<<newarr[i]<<" ID: "<<ids[i]<<endl;

    }
}

int main()
{
    srand(time(nullptr));
    int mainarr[100];
    bool acceptance[100];
    create_random_array(mainarr,100,1,800);
    sort_candidates(mainarr,100,acceptance);
    print_numberof(true,mainarr,100,acceptance);
    print_candidates(true,mainarr,100,acceptance);
    rank_candidates(10,mainarr,100);

}
