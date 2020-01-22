#include<iostream>
using  namespace std;
int main()
{
double mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}},mat2[3][3]={{9,8,7},{6,5,4},{3,2,1}},mat3[3][3];

for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        mat3[i][j]=mat1[i][j]+mat2[i][j];
        cout<<mat3[i][j]<<"\t";
    }
    cout<<endl;
}


}

