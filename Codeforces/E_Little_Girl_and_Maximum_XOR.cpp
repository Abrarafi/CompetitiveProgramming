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
   Boost;
   ll l,r;cin>>l>>r;
   ll ans=0;
   for(ll i=62;i>=0;i--)
   {
        ll x=(ll)1<<i;
        ll temp1=l&x;
        ll temp2=r&x;
        if(temp1!=temp2)
        {  
            for(ll j=i;j>=0;j--)
            {
                ll x1=(ll)1<<j;
                ans+=x1;
                
            }
            break;
        }
   }
   
   cout<<ans<<endl;
   
}