#include<bits/stdc++.h>
using namespace std;
#define here cout<<"HERE"<<endl;
const int N=1000;
char graph[N][N];
bool vis[N][N];
int c=0;
int s=0;
void dfs(int i,int j,int n,int m,int x)
{
    if(i<0||j<0)return;
    if(i>=n||j>=m)return;
    if(graph[i][j]=='#')return;
    if(vis[i][j]==true)return;
    c++;
    vis[i][j]=true;
    dfs(i,j+1,n,m,x);
    dfs(i,j-1,n,m,x);
    dfs(i+1,j,n,m,x);
    dfs(i-1,j,n,m,x);
}
void dfs2(int i,int j,int n,int m,int x)
{
    if(i<0||j<0)return;
    if(i>=n||j>=m)return;
    if(graph[i][j]=='#')return;
    if(vis[i][j]==true)return;
    graph[i][j]='X';
    vis[i][j]=true;
    dfs2(i,j+1,n,m,x);
    dfs2(i,j-1,n,m,x);
    dfs2(i+1,j,n,m,x);
    dfs2(i-1,j,n,m,x);
}

void dfs1(int i,int j,int n,int m,int x)
{
    if(s>=(c-x))
    {
        dfs2(i,j,n,m,x);
        return;
    }

    if(i<0||j<0)return;
    if(i>=n||j>=m)return;
    if(graph[i][j]=='#')return;
    if(vis[i][j]==true)return;
    s++;
    vis[i][j]=true;
    dfs1(i,j+1,n,m,x);
    dfs1(i,j-1,n,m,x);
    dfs1(i+1,j,n,m,x);
    dfs1(i-1,j,n,m,x);
}

int main()
{
    int n,m,x;cin>>n>>m>>x;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)cin>>graph[i][j];
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(graph[i][j]=='.'&& vis[i][j]==0)
            {
                dfs(i,j,n,m,x);
                break;
            }
        }
    }
    memset(vis,0,sizeof vis);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(graph[i][j]=='.'&& vis[i][j]==0)
            {
                
                dfs1(i,j,n,m,x);
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
        cout<<graph[i][j];
    }cout<<endl;}

}