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
   int a[n];
   map<int,int>mp;
   int mn=INT_MAX;
   fr(i,0,n-1)
   {
    cin>>a[i];
    mp[a[i]]++;
    mn=min(mn,a[i]);
   }
   sort(a,a+n);
   if(mp[1]==1)YES;
   else if(mp[1]>1)
   {
    NO;
   }
   else
   {
    int flag=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]%mn>0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        YES;
    }
    else{
        if(mp[mn]==1)YES;
        else NO;
    }
   }


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