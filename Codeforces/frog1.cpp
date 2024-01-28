#include<bits/stdc++.h>
using namespace std;

const int N=1e6+123;
int dp[N];
int h[N];

int frog(int i)
{
    if(i==0)return 0;
    if(dp[i]!=-1)return dp[i];

    int cost=INT_MAX;
    cost=min(cost,frog(i-1)+abs(h[i]-h[i-1]));
    if(i>1)
    cost=min(cost,frog(i-2)+abs(h[i]-h[i-2]));
    //cout<<cost<<endl;
    return dp[i]=cost;
}

int main()
{
    int n;cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    cout<<frog(n-1)<<endl;


}