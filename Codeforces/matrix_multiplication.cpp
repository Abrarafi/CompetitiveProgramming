#include<bits/stdc++.h>
using namespace std;

struct matrix{
    int mat[4][4];
};

matrix mul_mat(matrix a,matrix b)
{
    matrix ans;
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<4;col++)
        {
            int var=0;
            for(int i=0;i<4;i++)
            {
                var+=a.mat[row][i]*b.mat[i][col];
            }
            ans.mat[row][col]=var;
        }
    }
    return ans;
}
matrix identity()
{
    matrix I;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            if(i==j)I.mat[i][j]=1;
            else I.mat[i][j]=0;
        }
    return I;
}

int main()
{
    matrix a,b;
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)cin>>a.mat[i][j];
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)cin>>b.mat[i][j];
    matrix ans=mul_mat(a,b);
    matrix I=identity();
    for(int i=0;i<4;i++)
    {
    for(int j=0;j<4;j++)cout<<I.mat[i][j]<<" ";
    cout<<endl;
    }
}