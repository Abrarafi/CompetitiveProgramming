#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> g[N];
bool vis[N];
int cnt=0;

void dfs(int v)
{
    vis[v]=true;
    cnt++;
    for(auto child:g[v])
    {
        if(vis[child])continue;
        
        dfs(child);
    }
}

long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || n == r) return 1;
    double res = 0;
    for (int i = 0; i < r; i++) {
        res += log(n-i) - log(i+1);
    }
    return (long long)round(exp(res));
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int v1,v2;cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    vector<int> cc;
    for(int i=0;i<n;i++)
    {
        if(vis[i])continue;
        cnt=0;
        dfs(i);
        cc.push_back(cnt);
    }
    long long ans=0;
    long long sum=0;
    long long min=0;
    int c=0;
    for(int i=0;i<cc.size();i++)
    {
        if(cc[i]>1)
        {
            sum+=cc[i];
            min+=nCr(cc[i],2);
            c++;
        }
    }
    ans+=((n-sum)*sum);
   ans+= nCr(n-sum,2);
    ans+=nCr(sum,2)-min;
    cout<<ans<<endl;
    
}