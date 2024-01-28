#include<bits/stdc++.h>
using namespace std;

const int N=1e6+100;
int dp[N];

int func(int n,int coins[],int x)
{
    if(x==0)return 0;
    if(dp[x]!=-1)return dp[x];
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(x-coins[i]>=0)
        ans=min(ans+0LL,func(n,coins,x-coins[i])+1LL);
    }
    return dp[x]=ans;
}

int main()
{
    int n,x;
   // cin>>n>>x;
    n=3;
    x=11;
    memset(dp,-1,sizeof(dp));
    int a[n]={1,5,7};
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    long long ans=func(n,a,x);
    if(ans>=INT_MAX)cout<<"-1"<<endl;
    else cout<<ans<<endl;
}