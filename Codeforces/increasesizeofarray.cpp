#include<bits/stdc++.h>
using namespace std;
int main()
{
    //increase the size of array.
    int *a= new int [10];
    for(int i=0;i<10;i++)
    {
        a[i]=i;
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    //now increasing the size
    a=new int [20];
    for(int i=0;i<20;i++)
    {
        a[i]=i;
    }
    for(int i=0;i<20;i++)
    {
        cout<<a[i]<<",";
    }
    return 0;
}