#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={5,4,3,2,1};
    sort(a,a+5);
    /*for(int i;i<5;i++)cout<<a[i]<<endl;
    sort(a,a+5, [] (int i,int j)
    {
        return i>j;
    });*/
    for(int i;i<5;i++)cout<<a[i]<<endl;
    return 0;
}