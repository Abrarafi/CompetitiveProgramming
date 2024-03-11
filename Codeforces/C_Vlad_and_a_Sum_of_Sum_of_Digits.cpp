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

const int N=2*(1e5)+7;
int dp[N];

void solve()
{
  int n;cin>>n;
  cout<<dp[n]<<endl;
 
}
int main()
{
    Boost;
    for(int i=1;i<=N;i++)
    {
        int m=i;
        int sum=0;
        while(m>0)
        {
            sum+=(m%10);
            m/=10;
        }
        dp[i]=dp[i-1]+sum;
        
    }
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

}