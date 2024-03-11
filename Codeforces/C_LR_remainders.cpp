//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
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

void solve()
{
   ll n;cin>>n;
   ll m;cin>>m;
  ll a[n];
  ll p=1;
  deque<int>d;
  fr(i,0,n-1)
  {
    cin>>a[i];
    d.push_back(a[i]);
    p*=a[i];
  }
  vl v;
  //v.push_back(p%m);
  string s;cin>>s;
  int i=0,j=n-1;

  for(int k=0;k<n;k++)
  {
    v.push_back(p%m);//cout<<p<<endl;
    int x=d.front();
    int y=d.back();
    if(s[k]=='L')
    {
        p/=x;
        d.pop_front();
    }
    else{
        p/=y;
        d.pop_back();
    }
    
   // if(p<=1)break;
  }
  int x=0;
  for(auto i:v)
  {x++;
    cout<<i<<' ';
  }
  cout<<endl;
 
    

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