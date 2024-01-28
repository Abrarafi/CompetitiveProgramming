#include<bits/stdc++.h>
using namespace std;

int ans=0;
void check(vector<pair<int,int>>&v,int i,int n,bool vis[]){
    if(i>=n-1)
    {
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                ans++;
                check(v,0,n,vis);
            }
        }
        return;
    }
    if(vis[v[i].first]==0&&vis[v[i].second]==0)check(v,i+1,n,vis);
    if(vis[v[i].first]||vis[v[i].second])
    {
        vis[v[i].first]=1;
        vis[v[i].second]=1;
        check(v,i+1,n,vis);
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {

        int n;cin>>n;
        bool vis[n+10];
        memset(vis,0,n+10);
        ans=0;
        vector<pair<int,int>>v;
        for(int i=1;i<n;i++)
        {
            int v1,v2;cin>>v1>>v2;
            v.push_back({v1,v2});
        }
        
        vis[1]=true;
        check(v,0,n,vis);
        cout<<ans+1<<endl;
    }
    
}