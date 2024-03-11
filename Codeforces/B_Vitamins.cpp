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

ll n,k,l,q,r,x,y,z,t;
string s;
const ll template_array_size = 1e6+7;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];



void solve()
{
   
   cin>>n;
   ll f[n+1][8];
   ll inf = 1e17;
   for(int i=0;i<=n;i++)
   {
    for(int j=0;j<8;j++)
    {
        f[i][j]=inf;
    }
   }
   f[0][0]=0;
   for(int i=0;i<n;i++)
   {
    cin>>k;
    cin>>s;
    int mask=0;
    for(auto u:s)
    {
        mask+=(1<<(u-'A'));
    }
  //  cout<<mask<<endl;
    for(int j=0;j<8;j++)
    {
        f[i+1][j]=min(f[i][j],f[i+1][j]);
        f[i+1][j|mask]=min(f[i+1][j|mask],(f[i][j]+k));
        //cout<<f[i+1][j]<<endl;
    }
   }
   ll ans=f[n][7];
   if(ans==inf)cout<<"-1"<<endl;
   else cout<<ans<<endl;
}

int main()
{
    
    solve();
}