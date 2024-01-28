#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> g[N];
bool vis[N];

void dfs(int v)
{
    vis[v]=true;
    for(auto child:g[v])
    {
        if(!vis[child])dfs(child);
    }
}

int main()
{
    int n,t;cin>>n>>t;
    for(int i=1;i<n;i++)
    {
        int temp;cin>>temp;
        if((i+temp<=n))
        g[i].push_back(i+temp);
    }
   dfs(1);
   if(vis[t])cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}