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
        ll prefix[n];
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];

        }
        prefix[0]=b[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+b[i];
        }
        ll sumA[n];
        priority_queue<int, vector<int>, greater<int> > g;
        ll sum=0;
        for(int i=0;i<a;i++)
        {
            g.push(b[i]);
            sum+=b[i];
        }
        sumA[a-1]=sum;
        for(int i=a;i<n;i++)
        {
            g.push(b[i]);
            sum+=b[i];
            sum-=g.top();
            g.pop();
            sumA[i]=sum;
        }
        ll ans;
        ll life=p+x;
        ll l=a,h=n;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(prefix[mid-1]-sumA[mid-1]<=life)
            {
                l=mid+1;
                ans=mid;
            }
            else h=mid-1;
        }
        cout<<ans<<endl;
    }
}