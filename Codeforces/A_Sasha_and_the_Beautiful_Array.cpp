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

void solve()
{
    int n;cin>>n;
    int a[n];
    fr(i,0,n-1)cin>>a[i];
    sort(a,a+n);
    ll sum=0;
    fr(i,1,n-1)
    {
        sum+=(a[i]-a[i-1]);
    }
    cout<<sum<<endl;
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