#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;cin>>t;
    while(t--){
    int n,m;cin>>n>>m;
    char graph[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)cin>>graph[i][j];

    for(int i=0;i<m;i++)
    {
        int last=n-1;
        for(int j=n-1;j>=0;j--)
        {
            
            if(graph[j][i]=='o')last=j-1;
            if(graph[j][i]=='*'){
                swap(graph[j][i],graph[last][i]);
                last--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<graph[i][j];
        }cout<<endl;
    }
    cout<<endl;
    }
}