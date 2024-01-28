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

ll upper_bound(ll a[],ll l,ll h,ll target)
{
    while(l<h)
    {
        ll mid=(l+h)/2;
        if(a[mid]>=target)h=mid;
        else l=mid+1;
    }
    return h;
}

int main()
{
    ll y;cin>>y;
    ll p;cin>>p;
    ll election_year[p+1];
    for(ll i=1;i<=p;i++)cin>>election_year[i];
    //for(int i=1;i<=p;i++)cout<<election_year[i];
    
    ll ans=0,start=1,end=1;
    for(ll i=p;i>=y;i--)
    {
        ll ustart=upper_bound(election_year,1,i,(election_year[i]-y)+1);
        cout<<i<<" "<<ustart<<endl;
        if((i-ustart+1)>=ans)
        {
            ans=i-ustart+1;
            start=election_year[ustart];
            end=election_year[i];
        }
       //cout<<ans<<" "<<start<<" "<<end<<endl;
    }
    cout<<ans<<" "<<start<<" "<<end<<endl;
    
}
