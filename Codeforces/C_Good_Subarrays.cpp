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

void solve(int t)
{
    int n;cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    set<int>st;
    vi v(n);
    for(int i=0;i<n;i++)
    {
        if(i==0) v[i]=s[i]-'0';
        else v[i]=v[i-1]+(s[i]-'0');
    }
    ll ans=0;
    fr(i,0,n-1)
    {
        v[i]-=i;
        mp[v[i]]++;
        if(s[i]=='1')ans++;
        st.insert(v[i]);
    }
    cout<<ans<<endl;
    for(auto u:st)ans+=(mp[u]*(mp[u]-1))/2;
    
    cout<<ans<<endl;
}

int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
}