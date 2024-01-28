#include<bits/stdc++.h>
using namespace std;
const int N=10e3+7;
char graph[N][N];
bool vis[N][N];
int prevstep[N][N];
vector<pair<int,int>>prevcor;
int n,m;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
 
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
            if(graph[childx][childy]=='X')continue;
            
            if(!vis[childx][childy])
            {
                q.push({childx,childy});
                vis[childx][childy]=1;
                prevstep[childx][childy]=i;
            }
            if(graph[childx][childy]=='*')return;
        }
    }
}


void reset()
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            vis[i][j]=false;
            prevstep[i][j]=0;
        }
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n>>m;
        reset();
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>graph[i][j];
    int k;cin>>k;
    

    pair<int,int> begin,end;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)
    {
        if(graph[i][j]=='M')
        {
          bfs(i,j);
          begin=make_pair(i,j);
        }
        else if(graph[i][j]=='*')end=make_pair(i,j);
    }
    vector<pair<int,int>>precor;
    while(1)
    {
        
        int p=prevstep[end.first][end.second];
        precor.push_back({end.first,end.second});if(end==begin)break;
        end=make_pair(end.first-dx[p],end.second-dy[p]);
    }
    precor.push_back({begin.first,begin.second});
    int cnt=0;
     for(int i=0;i<precor.size()-1;i++)
     { 
       //cout<<precor[i].first<<" "<<precor[i].second<<endl;
           
            int c=0;
            for(int j=0;j<4;j++)
            {
                int x=precor[i].first+dx[j];
                int y=precor[i].second+dy[j];
                if(isvalid(x,y))
                {
                    cout<<x<<" "<<y<<endl;
                    if(graph[x][y]=='.')c++;
                }
            }
            if(c>2)cnt++;
     }
     cout<<cnt<<endl;;
    }
}