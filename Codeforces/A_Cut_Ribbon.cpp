#include<bits/stdc++.h>
using namespace std;
int n,a,b,c;
int dp[101000];
int solve(int i) {
    if (i >= n) return 0;
    if(dp[i]!=-1)return dp[i];
    int ret = INT_MIN;
    if (i+a <= n) ret = max(ret, solve(i+a));
    if (i+b <= n) ret = max(ret, solve(i+b));
    if (i+c <= n) ret = max(ret, solve(i+c));
    if (ret != INT_MIN) ret++;
    return dp[i]=ret;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n>>a>>b>>c;
   cout<<solve(0)<<endl;
  
}