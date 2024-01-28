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

const int N=1e6+123;

void equal(ll a[],ll b[],ll n)
{
    for(ll i=0;i<n;i++)
    {
        b[i]=a[i];
    }
}

int main()
{
    Boost;
    int t;cin>>t;
    while(t--)
    {
        ll n,p,x,a;
        cin>>n>>p>>x>>a;
        ll b[n];
        ll temp[n];
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }

        ll life=p+x;
        ll l=a,h=n;
        ll ans;
        while(l<=h)
        {
            ll mid=(l+h)/2;
            equal(b,temp,n);
            sort(temp,temp+mid);
           // for(int i=0;i<n;i++)cout<<temp[i]<<" ";cout<<endl;
            ll sum=0;
            for(ll i=0;i<mid-a;i++)
            {
                sum+=temp[i];
            }
            if(sum<=life)
            {
                l=mid+1;
                ans=mid;
            }
            else h=mid-1;
        }
        cout<<ans<<endl;

    }
}