//abrar_rafi
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
vector<int> g[N];
int cat[N];
int ans=0;
void dfs(int v,int par,int m,int n)
{
    if(g[v].size()==1&&(n==1||v!=1))ans++;
    for(auto child:g[v]) 
    {
        if(child==par)continue;
        if(cat[child]&&cat[v])
        cat[child]+=cat[v];
        if(cat[child]<=m)dfs(child,v,m,n);

    }  
}
int main()
{
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        cat[i]=t;
    }
    for(int i=1;i<n;i++)
    {
        int v1,v2;cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1,0,m,n);
    cout<<ans<<endl;
}