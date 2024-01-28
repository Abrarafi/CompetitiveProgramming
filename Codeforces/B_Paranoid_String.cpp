#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
void sol()
{
    int n;
    string s;
    cin>>n>>s;
    ll ans=n;
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])
        {
            ans+=i;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        sol();
    }
    return 0;
}