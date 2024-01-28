#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        int test=0;
        int count=0;
        for(int i=0;i<k;i++)
        {
            if(p[i]>k)count++;
        }
        cout<<count<<endl;
    }
}