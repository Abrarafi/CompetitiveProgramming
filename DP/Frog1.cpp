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
#define NO cout<<"NO"<<endl
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N=1e3;
int dp[N];

int frog(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(n==2)return 2;
    if(dp[n]!=-1)return dp[n];

    dp[n]=frog(n-1)+frog(n-2);
    return dp[n];

}

int main()
{
    Boost;
    memset(dp,-1,sizeof(dp));
    int ans=frog(10);
    cout<<ans<<endl;
    int n=100;
    int ans2[n+1];
    memset(ans2,0,sizeof(ans2));
    ans2[0]=1;
    
    for(int i=0;i<=n;i++)
    {
        if(i+1<=n)ans2[i+1]+=ans2[i];
        if(i+2<=n)ans2[i+2]+=ans2[i];
    }
    cout<<ans2[10]<<endl;

}