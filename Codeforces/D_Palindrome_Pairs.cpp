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


int main()
{
   int n;cin>>n;
   ll ans=0;
   map<ll,ll> cnt;
   for(int i=0;i<n;i++)
   {
        string s;
        cin>>s;

        

        ll mask=0;
        for(auto c:s)
        {
            ll val=c-'a';
            mask^=1<<val;
            //cout<<mask<<endl;
        }
        ans+=cnt[mask];
        for(ll flip=0;flip<26;flip++)
        {
            mask^=1<<flip;
            ans+=cnt[mask];
            mask^=1<<flip;
        }
        cnt[mask]++;
   }
   cout<<ans<<endl;
}