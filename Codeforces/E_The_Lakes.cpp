#include<bits/stdc++.h>
using namespace std;
const int N=1e3+7;
int graph[N][N];
bool vis[N][N];
int c=0;
int mx=0;
void dfs(int i,int j,int n,int m)
{
    if(i<0||j<0)return;
    if(i>=n||j>=m)return;
    if(graph[i][j]==0)return;
    if(vis[i][j]==true)return;
    c+=graph[i][j];
    vis[i][j]=true;
    dfs(i,j+1,n,m);
    dfs(i,j-1,n,m);
    dfs(i+1,j,n,m);
    dfs(i-1,j,n,m);
}
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        mx=0;
    
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {vis[i][j]=0;
        cin>>graph[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(graph[i][j]!=0&& vis[i][j]==0)
            {
                c=0;
                dfs(i,j,n,m);
                mx=max(c,mx);
            }
        }
    }
    cout<<mx<<endl;
    }
}