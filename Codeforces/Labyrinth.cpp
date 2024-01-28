#include<bits/stdc++.h>
using namespace std;
const int N=10e3+7;
char graph[N][N];
bool vis[N][N];

void dfs(int i,int j,int n,int m)
{
    if(i<0||j<0)return;
    if(i>=n||j>=m)return;
    if(graph[i][j]=='#')return;
    if(vis[i][j]==true)return;
    vis[i][j]=true;
    dfs(i,j+1,n,m);
    dfs(i,j-1,n,m);
    dfs(i+1,j,n,m);
    dfs(i-1,j,n,m);
}

int main()
{
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)cin>>graph[i][j];
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(graph[i][j]=='.'&& vis[i][j]==0)
            {
                dfs(i,j,n,m);
                count++;
            }
        }
    }
    cout<<count<<endl;
    


}