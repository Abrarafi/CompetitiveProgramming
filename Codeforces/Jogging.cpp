#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
int binExp(ll a,ll b)
{
    ll m=1e9+7;
    if(b==0)
    {
        return 1;
    }
    ll res=binExp(a,b/2);
    if(b&1)
    {
        return (a*((res*res)%m))%m;
    }
    else{
        return (res*res)%m;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        ll m=1e9+7;
        ll n,x;
        cin>>n>>x;
        ll p=binExp(2,n-1);
        ll ans=(x*p)%m;
        cout<<ans<<endl;
    }
    return 0;
}