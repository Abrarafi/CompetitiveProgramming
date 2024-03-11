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

const ll MOD=1e9+7;
inline void normal(ll &a) { a %=MOD; (a<0) && (a+=MOD); }
inline ll modMul(ll a, ll b) { a%=MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a%=MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a%=MOD, b %= MOD; normal(a), normal(b); a-=b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

const int m=1e9+7;

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%m;
        a = (a * a)%m;
        b >>= 1;
    }
    return res;
}

void solve()
{
    int n;cin>>n;
    ll a[n];
    fr(i,0,n-1)cin>>a[i];
    mll mp;
    fr(j,0,60)
    {
        ll x=1LL<<j;
        fr(i,0,n-1)
        {
            if((a[i]&x)!=0)
            {
                mp[j]++;

            }
        }
    }
    ll ans=0;
    fr(i,0,n-1)
    {
        ll tar=a[i];
        ll xval=0;
        ll oval=0;
        fr(j,0,60)
        {
            ll x=1LL<<j;
            if(tar&x)
            {
                xval=modAdd(xval , modMul(mp[j],x));
                oval=modAdd(oval,modMul(n,x));
            }
            else{
                xval=modAdd(xval,modMul(mp[j],0));
                oval=oval=modAdd(oval,modMul(mp[j],x));
            }
        }
        ans=modAdd(ans,modMul(xval,oval));
    }
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