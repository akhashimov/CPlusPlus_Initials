#include <iostream>

using namespace std;
int largest_array(int *first,int how_many);
void display_array(int *first,int how_many);

int main()
{
    int A[10] {3,6,22,3,4,8,-10,34,7,11};
    cout<<"Array A:\n";
    display_array(A,10);
    cout<<"\nLargest value: "<<A[largest_array(A,10)]<<endl;

    double B[5] {3.7,6.1, 6.8, 6.9, 6.5 };
    cout<<"Array B:\n";
    display_array(B,5);
    cout<<"\nLargest value: "<<B[largest_array(B,5)]<<endl;
    return 0;
}

int largest_array(int *first,int how_many)
{
    int max_index=0;
    for(int i=1; i<how_many; ++i)
        if(first[i]>first[max_index])
            max_index=i;
    return max_index;
}

void display_array(int *first,int how_many)
{
    cout<<endl;
    for(int i=0; i<how_many; ++i)
    {
        cout<<first[i]<<"\t";
    }
}
