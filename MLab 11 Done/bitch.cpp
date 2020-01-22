#include<iostream>
using namespace std;
void insertionSort(int arr[],int length)
{
    for(int i=1; i<length; i++)
    {
        int temporary=arr[i];
        int j;
        for(j=i-1; j>=0 && arr[j]>temporary; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temporary;
    }
}
int main()
{



}
