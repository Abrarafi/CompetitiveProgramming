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

const int N=1e6+123;
long long binpow(long long a, long long b) {
if (b == 0)
return 1;
long long res = binpow(a, b >> 1);
if (b % 2)
return res * res * a;
else
return res * res;
}


void solve()
{
  
  int n;cin>>n;
  int ans=log2(n);
  
  ans=binpow(2,ans);
  cout<<ans<<endl;

}
int main()
{
    Boost;
   int t;cin>>t;
   while(t--)
   {
    solve();
   }
}