#include<bits/stdc++.h>
using namespace std;
const int N=1e3+7;
int g[N][N];
bool vis[N][N];
int mx,my;

void dfs(int x,int y)
{
    vis[x][y]=true;
    for(int i=x+1;i<=mx;i++ )
    {
        if(g[i][y]&&!vis[i][y])
        {
            dfs(i,y);
        }
    }
    for(int i=x-1;i>0;i-- )
    {
        if(g[i][y]&&!vis[i][y])
        {
            dfs(i,y);
        }
    }
     for(int i=y+1;i<=my;i++ )
    {
        if(g[x][i]&&!vis[x][i])
        {
            dfs(x,i);
        }
    }
    for(int i=y-1;i>0;i-- )
    {
        if(g[x][i]&&!vis[x][i])
        {
            dfs(x,i);
        }
    }

}

int main()
{
   int n;cin>>n;
   for(int i=0;i<n;i++)
   {
    int x,y;
    cin>>x>>y;
    g[x][y]=1;
    mx=max(mx,x);
    my=max(my,y);
   }
   int cnt=0;
   for(int i=1;i<=mx;i++)
   for(int j=1;j<=my;j++)
   {
    if(g[i][j]&&!vis[i][j])
    {
        dfs(i,j);
        cnt++;
    }
   }
   cout<<cnt-1<<endl;
}