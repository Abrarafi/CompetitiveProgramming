#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,z;
        cin>>n>>z;
        int a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max=0;
        int test=0;
        for(long long i=0;i<n;i++)
        {
            test=(a[i]|z);
            if(test>max)
            {
                max=test;
            }
        }
        cout<<max<<endl;
    }
}