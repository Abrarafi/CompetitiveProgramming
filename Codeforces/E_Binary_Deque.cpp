#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define inf 9000000000000000000LL
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        int n,s;
        cin>>n>>s;
        vi arr(n);
        ll sum=0;
        queue<ll> q; 
        for(int &i:arr)
        {
            cin>>i;
            sum+=i;
        }
        if(sum<s)
        {
            cout<<"-1"<<endl;
        }
        else{
            sum=0;
            ll mn=inf;
            for(ll i=0;i<n;i++)
            {
                sum+=arr[i];
                q.push(arr[i]);
                if(sum==s)
                {
                    mn=min(mn,(n-(ll)q.size()));
                }
                while(sum>s)
                {
                    sum-=q.front();
                    q.pop();
                }
            }
            cout<<mn<<endl;

        }
    }
    return 0;
}