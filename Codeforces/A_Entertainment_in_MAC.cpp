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
   string str=s;
   reverse(s.begin(),s.end());
   if(s<str)
   {
    cout<<s<<str<<endl;
   }
   else cout<<str<<endl;
}

int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
}