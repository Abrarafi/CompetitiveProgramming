#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
void solve()
{
    int n,x;
    cin>>n>>x;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vi v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j){
            for(int k=0;k<n;k++)
            {
                if(j!=k && i!=k)
                {
                    if(a[i]+a[j]+a[k]==x)
                    {
                        cout<<i+1<<' '<<j+1<<' '<<k+1<<endl;
                        return;
                    }
                }
            }
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
int main()
{
    solve();   
}