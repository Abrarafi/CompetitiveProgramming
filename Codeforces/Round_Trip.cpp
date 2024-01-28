#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
bool iscycle=0;
vector<int> graph[N];
bool vis[N];
vector<int> ans;
bool inc[N];
bool dfs(int v,int par)
{
    vis[v]=true;
    ans.push_back(v);
    for(auto child:graph[v])
    {
        if(!vis[child])
        {
            if(dfs(child,v)==true)return true;
        }
        else
        if(child!=par)
        {
            ans.push_back(child);
            return true;
        }
    }
    ans.pop_back();
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
        ans.clear();
        if(dfs(i,0))
        {
            iscycle=true;
            break;
        }
    
    }
    int x=0;
   if(iscycle)
   {
    for(int i=0;i<ans.size()-1;i++)
    {
        if(ans[i]==ans[ans.size()-1])x=i;
    }
    cout<<ans.size()-x<<endl;
    for(int i=x;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
   }
   else cout<<"IMPOSSIBLE"<<endl;
}