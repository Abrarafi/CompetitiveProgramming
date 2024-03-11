//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define mii map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl;
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int m=1e9+7;

void solve()
{
    ll n;cin>>n;
    int a[n];
    int fi,li;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    if(i==0)fi=a[i];
    if(i==(n-1))li=a[i];
   }
   if(fi == li)
   {
    int fc=0,lc=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==li)fc++;
        else break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==li)lc++;
        else break;
    }
    if(fc+lc>=n)cout<<'0'<<endl;
    else cout<<n-(fc+lc)<<endl;
   }
   else{
    int fc=0,lc=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==fi)fc++;
        else break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==li)lc++;
        else break;
    }
    if(fc>lc)cout<<n-fc<<endl;
    else cout<<n-lc<<endl;
   // cout<<fc<<" "<<lc<<endl;
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