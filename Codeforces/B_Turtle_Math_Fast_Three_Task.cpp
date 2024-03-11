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

void solve()
{
    int n;cin>>n;
    ll cnt=0;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        cnt+=x;
        mp[x%3]++;
    }
    int rem=cnt%3;
    
    if(rem==2)cout<<"1"<<endl;
    else if(rem==1)
    {
        if(mp[1])cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    else cout<<"0"<<endl;

}
int main()
{
   int t;cin>>t;
   while(t--)
   {
    solve();
   }
}