#include<bits/stdc++.h>
using namespace std;
const int INF=1e8+7;
int lev[8][8];
int vis[8][8];
void reset()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            lev[i][j]=INF;
            vis[i][j]=0;
        }
    }
}
int getx(string s)
{
    return s[0]-'a';
}
int gety(string s)
{
    return s[1]-'1';
}

vector<pair<int,int>> movements={
    {-1,2},{1,2},
    {2,-1},{2,1},
    {-2,1},{-2,-1},
    {-1,-2},{1,-2}

};

bool isvalid(int x,int y)
{
    return x>=0&&y>=0&&x<8&&y<8;
}

int bfs(string source,string dest)
{
    int sx=getx(source);
    int sy=gety(source);
    int dx=getx(dest);
    int dy=gety(dest);
    queue<pair<int,int>> q;
    q.push({sx,sy});
    vis[sx][sy]=1;
    lev[sx][sy]=0;
    while(!q.empty())
    {
        auto v=q.front();
        int x=v.first;int y=v.second;
        q.pop();
        for(auto movement:movements)
        {
            int childx=x+movement.first;int childy=y+movement.second;
            if(!isvalid(childx,childy))continue;
            if(!vis[childx][childy])
            {
                q.push({childx,childy});
                lev[childx][childy]=lev[x][y]+1;
                vis[childx][childy]=1;
            }
            if(lev[dx][dy]!=INF)break;
        }
    }
    return lev[dx][dy];
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        reset();
       cout<< bfs(s1,s2)<<endl;
    }
}