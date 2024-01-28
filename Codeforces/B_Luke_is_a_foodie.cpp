#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
int findMajority(int arr[], int n)
{
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    return maxCount;
}
int binExp(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    int res=binExp(a,b/2);
    if(b&1)
    {
        return a*(res*res);
    }
    else{
        return res*res;
    }
}
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll &i:a)
    {
        cin>>i;
    }
    ll v;
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if((abs(a[i]-a[j]))>(2*x))
            {
                i=j;
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        solve();
    }
    return 0;
}