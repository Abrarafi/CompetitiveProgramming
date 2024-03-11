//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mll map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl;
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const  int N=1e2;
int dp[N];
 
int func(int n,int coins[],ll x)
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
    Boost;
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
    ll n,x;
    cin>>x;
    n=5;
    memset(dp,-1,sizeof(dp));
    int ans1=x/15;
    if(ans1>0)ans1--;
    int rem=x%15;
    if(x>=15)rem+=15;
    else rem=x;
    int a[n]={1,3,6,10,15};
    long long ans=func(n,a,rem);
    ans+=ans1;
    if(ans>=INT_MAX)cout<<"-1"<<endl;
    
    else cout<<ans<<endl;
    }
}