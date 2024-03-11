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
   int n,k;
   cin>>n>>k;
   int d=(4*n)-2;
   int c=n*2;
   if(k==d)cout<<n*2<<endl;
   else if(k>=(d-1))cout<<c-1<<endl;
   else if(k>=(d-2))cout<<c-2<<endl;
   else 
   {
        if(k%2==0)cout<<k/2<<endl;
        else cout<<k/2+1<<endl;
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