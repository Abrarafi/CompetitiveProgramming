#include<bits/stdc++.h>
using namespace std;
const int N=10e3+7;
char graph[N][N];
bool vis[N][N];
bool ispos=1;
void dfs(int i,int j,int n,int m)
{
    if(i<0||j<0)return;
    if(i>=n||j>=m)return;
    if(graph[i][j]=='#')return;
    if(i==n-1 && j==m-1)
    {
        if(graph[i][j]=='.')ispos=1;
    }
    if(vis[i][j])return;
    vis[i][j]=true;
    dfs(i,j+1,n,m);
    dfs(i,j-1,n,m);
    dfs(i+1,j,n,m);
    dfs(i-1,j,n,m);
}

int main()
{
    int t;cin>>t;
    while(t--){
        ispos=1;
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        cin>>graph[i][j];
        vis[i][j]=false;
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
        if(graph[i][j]=='B')
        {
            if(i+1<n && graph[i+1][j]!='G'&&graph[i+1][j]!='B' )graph[i+1][j]='#';
            if(j+1<m &&graph[i][j+1]!='G'&&graph[i][j+1]!='B')graph[i][j+1]='#';
            if(i-1>=0&&graph[i-1][j]!='G'&&graph[i-1][j]!='B')graph[i-1][j]='#';
            if(j-1>=0&&graph[i][j-1]!='G'&&graph[i][j-1]!='B')graph[i][j-1]='#';
            if(i+1<n&&graph[i+1][j]=='G'){ispos=0;}
            if(j+1<m&&graph[i][j+1]=='G'){ispos=0;}
            if(i-1>=0&& graph[i-1][j]=='G'){ispos=0;}
            if(j-1>=0&&graph[i][j-1]=='G')
            {ispos=0;}
             
        }
        //cout<<graph[i][j]<<" ";
        
    }
    //cout<<endl;
    }
    if(ispos){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(graph[i][j]=='G'&& vis[i][j]==0)
            {
                ispos=0;
                dfs(i,j,n,m);
                if(ispos==0)
                {
                    
                    break;
                }
            }
        }
    }}
    if(ispos==0)cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
    }
    


}