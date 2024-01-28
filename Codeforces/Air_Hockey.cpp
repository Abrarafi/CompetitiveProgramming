#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            int ans=7-a;
            cout<<ans<<endl;
        }
        else if(a>b)
        {
            int ans=7-a;
            cout<<ans<<endl;
        }
        else{
            int ans=7-b;
            cout<<ans<<endl;
        }
    }
    return 0;
}