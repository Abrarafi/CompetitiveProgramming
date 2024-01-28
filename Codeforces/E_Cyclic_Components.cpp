#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
vector<int> graph[N];
int vis[N];
vector<int> ans;
bool inc[N];
 int c=1;
 int ct=0;
 bool dfs(int v,int par)
 {
    vis[v]+=c;
    for(auto child:graph[v])
    {
       if(!vis[child])
       {
        if(dfs(child,v))return true;
       }
       else
       {
            if(vis[child]==c&&child!=par)return true;
       }
    }

    return false;
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
        if(dfs(i,0))
        {
            ct++;
            c++;
        }
    
    }
    cout<<ct<<endl;
}