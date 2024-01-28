#include<bits/stdc++.h>
using namespace std;
const int N=10e3+7;
char graph[N][N];
bool vis[N][N];
int prevstep[N][N];
int n,m;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
string mov="RLDU";
vector<char> ans;

bool isvalid(int x,int y)
{
    return x>0&&y>0&&x<=n&&y<=m;
}
void bfs(int sx,int sy)
{
    queue<pair<int,int>> q;
    q.push({sx,sy});
    vis[sx][sy]=1;
    while(!q.empty())
    {
        auto v=q.front();
        int x=v.first;int y=v.second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int childx=x+dx[i];
            int childy=y+dy[i];
            if(!isvalid(childx,childy))continue;
            if(graph[childx][childy]=='#')continue;
            if(!vis[childx][childy])
            {
                q.push({childx,childy});
                vis[childx][childy]=1;
                prevstep[childx][childy]=i;
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>graph[i][j];
    pair<int,int> begin,end;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)
    {
        if(graph[i][j]=='A')
        {
          bfs(i,j);
          begin=make_pair(i,j);
        }
        else if(graph[i][j]=='B')end=make_pair(i,j);
    }
    vector<char> steps;
    if(vis[end.first][end.second])
    {cout<<"YES"<<endl;
    while(end!=begin)
    {
        int p=prevstep[end.first][end.second];
        steps.push_back(mov[p]);
        end=make_pair(end.first-dx[p],end.second-dy[p]);
    }
    cout<<steps.size()<<endl;
    for(int i=steps.size()-1;i>=0;i--)cout<<steps[i];cout<<endl;

    }
    else cout<<"NO"<<endl;
}