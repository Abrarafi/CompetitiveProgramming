/*

author = Abrar_Rafi;

*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ignore cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define debug(x) cerr<<x<<endl;
#define here fprintf(stderr, "====I am Here====\n");
#define vi vector<int>
#define pb push_back
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define mii  map<long long int, long long int> 

map<char,set<char>> mp;
set<char>st;
map<char,int>mc;
map<char,bool> vis;
int main()
{
    Boost;

    int n,m;cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        char a,b;cin>>a>>b;
        st.insert(a);
        st.insert(b);
        mp[a].insert(b);
        mp[b].insert(a);
        mc[a]++;
        mc[b]++;

    }
    vector<pair<int,char>> v;
    for(auto i:st)
    {
        v.push_back({mc[i],i});
    }
    sort(v.begin(),v.end());
    set<char> con;
    for(auto i:v)
    {
        if(vis[i.second]==0)
        {
            vis[i.second]=1;
            con.insert(i.second);
            for(auto j:mp[i.second])
            {
                vis[j]=1;
            }
        }
    }
    int ans=n-(st.size()-con.size());
    cout<<ans<<endl;
}
