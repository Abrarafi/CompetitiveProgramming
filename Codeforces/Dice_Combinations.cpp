#include<bits/stdc++.h>
using namespace std;
const int N=1e6+100;
long long mod=1e9+7;
long long dp[N];
int ways(long long n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(n==2)return 2;
    if(n==3)return 4;
    if(n==4)return 8;
    if(n==5)return 16;
    if(n==6)return 32;
    if(dp[n]!=-1)return dp[n];
    long long ans=0;
    for(int i=1;i<=6;i++)
    {
        if(n-i>=0)
        {
            ans+=ways(n-i);
        }
    } 
    ans%=mod;
    return dp[n]=ans;
}
int main()
{
    long long n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<ways(n)<<endl;
}