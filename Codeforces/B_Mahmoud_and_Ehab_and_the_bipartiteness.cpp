#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
vector<int> graph[N];
bool vis[N];
int color[N];
long long count_col[3];
void dfs(int v)
{
    vis[v]=true;
    for(auto child:graph[v])
    {
        if(vis[child])continue;
        if(color[v]==1)
        {
            count_col[2]++;
            color[child]=2;
        }
        else
        {
            color[child]=1;
            count_col[1]++;
        }
        dfs(child);
    }
}

int main()
{
    int n;cin>>n;
    for(int i=1;i<n;i++)
    {
        int v1,v2;cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    color[1]=1;
    count_col[1]++;
    dfs(1);
    cout<<(count_col[1]*count_col[2])-n+1<<endl;
}