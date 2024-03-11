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
  
   ll a,b,l;cin>>a>>b>>l;
   ll mul;
   ll cnt=0;
   int lim=log2(l)+1;
   int flag=0;
   map<ll,ll> mp;
   for(ll i=0;i<21;i++)
   {
    for(ll j=0;j<21;j++)
    {
        if((i+j)>20)break;
        mul=binpow(a,i);
        if(mul>l)
        {
            flag=1;
            break;
        }
        ll x=binpow(b,j);
        if(x>l)break;
        mul*=x;
        
        if(mul>l)break;
        if(l%mul==0)
        {
            if(mp[l/mul]==0)cnt++;
            mp[l/mul]++;
        }
    }
    if(flag)break;
   }
   cout<<cnt<<endl;

}
int main()
{
   int t;cin>>t;
   while(t--)
   {
    solve();
   }
}