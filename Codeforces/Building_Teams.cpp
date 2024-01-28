#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;

vector<int> graph[N];
bool vis[N];
int colored[N];
bool crash=0;

void dfs(int v)
{
    if(crash)return;
    vis[v]=true;
    for(auto child:graph[v])
    {
        if(!vis[child])
        {
            if(colored[v]==1)colored[child]=2;
            else colored[child]=1;
            dfs(child);
        }
        else{
            
            if(colored[v]==colored[child])
            {
                crash=1;
            }
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
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        if(crash)break;
        colored[i]=1;
        dfs(i);
    }
    if(crash)cout<<"IMPOSSIBLE"<<endl;
    else{
    for(int i=1;i<=n;i++)
    {
        cout<<colored[i]<<" ";
    }cout<<endl;
    }
}