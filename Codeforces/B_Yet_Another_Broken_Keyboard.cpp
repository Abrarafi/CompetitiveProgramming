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

ll n,k,l,q,r,x,y,z;
string s;
const ll template_array_size = 1e6+7;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];



void solve()
{
   int n;cin>>n;
   int k;cin>>k;
   cin>>s;
   map<char,int> mp;
   while(k--)
   {
        char temp;
        cin>>temp;
        mp[temp]++;
   }
   ll f[n+1];
   f[0]=0;
   ll ans=0;
   for(int i=0;i<n;i++)
   {
    if(mp[s[i]])f[i+1]=f[i]+1;
    else f[i+1]=0;
    ans+=f[i+1];
   }
   cout<<ans<<endl;
   
}

int main()
{
    solve();
}