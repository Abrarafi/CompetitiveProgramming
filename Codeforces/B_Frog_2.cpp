#include<bits/stdc++.h>
using namespace std;
const int N=1e6+123;
int h[N];
int dp[N];
int func(int x,int k)
{
    if(x==0)return 0;
    if(dp[x]!=-1)return dp[x];
    int cost=INT_MAX;
    for(int i=1;i<=k;i++)
    {
        if(x>=i)
        cost=min(cost,func(x-i,k)+(abs(h[x]-h[x-i])));
    }
    return dp[x]=cost;

}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n,k;cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }

    cout<<func(n-1,k)<<endl;;    
}