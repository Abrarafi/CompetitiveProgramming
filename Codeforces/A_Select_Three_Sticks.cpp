#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long m=INT_MAX;
        for(int i=1;i<n-1;i++)
        {
            m=min(m,(a[i]-a[i-1])+(a[i+1]-a[i]));
        }
        cout<<m<<endl;
    }
}