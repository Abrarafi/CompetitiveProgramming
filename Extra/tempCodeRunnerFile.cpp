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


float d(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

int main()
{
    Boost;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,q;cin>>n>>q;
    vector<pair<int,int>> v1;
    vector<pair<int,int>> v2;
    for(int i=0;i<n;i++)
    {
        int a,b;cin>>a>>b;
        v1.push_back({a,b});
    }
    for(int i=0;i<q;i++)
    {
        int a,b;cin>>a>>b;
        v2.push_back({a,b});
    }
    
    for(int i=0;i<v2.size();i++)
    {
        
        int mi=1;
        int c=0;
        vi reg;
        int md=d(v2[i].first,v2[i].second,v1[0].first,v1[0].second);
        for(int j=1;j<v1.size();j++)
        {
            int dis=d(v2[i].first,v2[i].second,v1[j].first,v1[j].second);
            md=min(dis,md);
        }
        for(int j=0;j<v1.size();j++)
        {
            int dis=d(v2[i].first,v2[i].second,v1[j].first,v1[j].second);
            if(md==dis)
            {
                reg.push_back(j+1);
                c++;
            }
        }
        //cout<<c<<endl;
        if(c==1)
        {
            cout<<"REGION ";
        }
       else if(c==2)
        {
            cout<<"LINE ";
        }
        else
        {
            cout<<"POINT";
        }
         for(auto u:reg)
        {
            if(c<3) cout<<u<<" ";
        }cout<<endl;
       
    }

    return 0;

}
