#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;

vector<int> graph[N];
bool vis[N];

void dfs(int v)
{
    vis[v]=true;
    for(auto child:graph[v])
    {
        if(vis[child]==true)continue;
        dfs(child);
    }
}

int main()
{
    int n,m;cin>>n>>m;
    vector<int> ans;
    int count=0;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        dfs(i);
        count++;
        ans.push_back(i);
    }
    cout<<count-1<<endl;
    for(int i=0;i<ans.size()-1;i++)
    {
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
}