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
#define debug(n) cerr<<n<<endl



int main()
{
   
    int n;cin>>n;
  int f[n+1];
  f[0]=1;
  f[1]=0;
   for(int i=2;i<=n;i++)
   {
    f[i]=2*f[i-2];
   }
   cout<<f[n]<<endl;
    
    
}