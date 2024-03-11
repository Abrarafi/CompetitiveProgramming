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
#define NO cout<<"NO"<<endl
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   int n;cin>>n;
   vi v;
   int m=n+1;
   if(n%2==0)
   {

        for(int i=1;i<=n/2;i++)
        {
            v.push_back(m-i);
            v.push_back(i);
        }

   }
   else 
   {
    for(int i=1;i<=n/2;i++)
        {
            v.push_back(m-i);
            v.push_back(i);
        }
        v.push_back((n/2)+1);
   }
   for(auto i:v)cout<<i<<" ";cout<<endl;
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