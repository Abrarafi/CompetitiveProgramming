#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
vector<int> graph[N];
bool vis[N];
int color[N];
void reset(int n)
{
    for(int i=1;i<=n;i++)
    {
        vis[i]=false;
        graph[i].clear();
        color[i]=0;
    }
}
void dfs(int v)
{
    vis[v]=true;
    for(auto child:graph[v])
    {
        if(vis[child])continue;
        if(color[v]==1)
        {
            color[child]=2;
        }
        else
        {
            color[child]=1;
        }
        dfs(child);
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
    int n,m;cin>>n>>m;
    reset(n);
    for(int i=1;i<=m;i++)
    {
        int v1,v2;cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    color[1]=1;
    dfs(1);
    int c1=0;int c2=0;
    for(int i=1;i<=n;i++)
    {
        if(color[i]==2)
        c2++;
        else c1++;
    }
    if(c1<c2)
    {cout<<c1<<endl;
        for(int i=1;i<=n;i++)
        {
            if(color[i]==1)cout<<i<<" ";
        }cout<<endl;
    }
    else
    {
        cout<<c2<<endl;
        for(int i=1;i<=n;i++)
        {
            if(color[i]==2)cout<<i<<" ";
        }cout<<endl;
    }
    }
}