#include<bits/stdc++.h>
using namespace std;
const int N=10;
int dp[N];
vector<vector<int>>g(N);
void reset(int n)
{
    for(int i=1;i<=n;i++)
    {
        g[i].clear();
    }
}

void func(int i,int n,int a[])
{
    if(i>n)return;
    if(dp[i]!=-1)func(i+1,n,a);
    else if(g[i].empty())
    {
        dp[i]=a[i];
        func(i+1,n,a);
    }
    else{
        dp[i]=0;
    for(auto child:g[i])
    {
        if(dp[child]!=-1)dp[i]+=dp[child];
        else{
            func(child,n,a);
            dp[i]+=dp[child];
           
        }
    } 
    dp[i]=min(dp[i],a[i]);
    func(i+1,n,a);
    }
}

void solve()
{
    int n,k;
    cin>>n>>k;
   // n=5,k=1;

    int a[n+1];//={0,5,4,1,3,4};
    for(int i=1;i<=n;i++)cin>>a[i];
    memset(dp,-1,sizeof(dp));
    reset(n);
    //dp[2]=0;
    for(int i=0;i<k;i++)
    {
        int x;cin>>x;dp[x]=0;
    }
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        while(m--)
        {
            int x;cin>>x;
            g[i].push_back(x);
        }
     }
    //g[1]={4,5};g[2]={3,5,4};g[3]={1,4};g[4]={5};
    func(1,n,a);
    for(int i=1;i<=n;i++)cout<<dp[i]<<" ";cout<<endl;
}

int main()
{
    int t;cin>>t;
    //t=1;
    while(t--)
    {
        solve();
    }
}