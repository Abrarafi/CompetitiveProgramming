#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long> v;
    vector<long long> b;
    long long count=0;
    long long rcount=0;
    v.push_back(0);
    for(long long i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            count+=(a[i-1]-a[i]);
        }
        v.push_back(count);
    }
    b.push_back(0);
    for(long long i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            rcount+=(a[i+1]-a[i]);
        }
        b.push_back(rcount);
    }
    
    while(m--)
    {
        int s,t;
        cin>>s>>t;
        if(s<t)
        {
            cout<<v[t-1]-v[s-1]<<endl;
        }
        else{
            cout<<b[n-t]-b[n-s]<<endl;
        }
    }
    
}