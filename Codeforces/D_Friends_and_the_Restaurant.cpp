#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n];
        int y[n];
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>y[i];
        }
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(y[i]-x[i]);
        }
        sort(v.begin(),v.end());
        int ans=0;
        int temp=n-1;
        for(int i=0;i<n;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                if((v[i]+v[j])>0)
                {
                    ans++;
                    temp=j;

                }
            }
        }
    }
}