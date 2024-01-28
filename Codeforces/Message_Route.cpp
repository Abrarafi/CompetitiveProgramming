#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
vector<int> g[N];
bool vis[N];
int n,m;
int lev[N];
int var[N];
void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source]=1;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        for(auto child:g[v])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=1;
                lev[child]=lev[v]+1;
                var[child]=v;
            }
            if(vis[n])break;
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v1,v2;cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bfs(1);
    if(vis[n])
    {
        cout<<lev[n]+1<<endl;
        int p=n;
        vector<int>ans;
        ans.push_back(p);
        while(var[p])
        {
            ans.push_back(var[p]);
            p=var[p];
        }
        for(int i=ans.size()-1;i>=0;i--)cout<<ans[i]<<" ";cout<<endl;

    }
    else cout<<"IMPOSSIBLE"<<endl;
}