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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<int>st(a,a+n);
    vector<int>v;
    int f=0;
    map<int,int> mp;
    for(auto i:st)
    {
        v.push_back(i);
    }
    int j=0;
    int mx=-1;
    for(auto i:v)
    {
        int x=lower_bound(v.begin(),v.end(),i+n)-v.begin();
        mx=max(mx,x-j);
        j++;
    }
    cout<<mx<<endl;

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