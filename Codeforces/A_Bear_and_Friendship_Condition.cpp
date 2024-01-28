#include<bits/stdc++.h>
using namespace std;
const int N=1e6+123;
vector<int> g[N];
bool vis[N];
long long vertices=0;
long long edges=0;
void dfs(int v)
{
    vis[v]=true;
    vertices++;
    edges+=g[v].size();
    for(auto child:g[v])
    {
        if(!vis[child])
        {
            dfs(child);
        }

    }
    
}

int main()
{
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        v1>v2?g[v2].push_back(v1):g[v1].push_back(v2);
    }
    for(int i=1;i<=n;i++)
    {
        vertices=0;edges=0;
        if(vis[i])continue;
        dfs(i);
        if((long long)edges!=(long long)(vertices*(vertices-1))/2)
        {
            
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}