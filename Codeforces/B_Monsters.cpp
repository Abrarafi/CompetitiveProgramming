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

bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}

void Solve()
{
   int n,k;cin>>n>>k;
   int a[n+1];
vector<pair<int,int>>v;
   for(int i=1;i<=n;i++)
   {
        cin>>a[i];
        v.push_back({(a[i]%k),i});
   }
   
    for(auto i:v)
    {
        if(i.first==0)cout<<i.second<<" ";
    }
sort(v.begin(),v.end(),sortbyCond);
    for(int i=v.size()-1;i>=0;i--)
    {
       // cout<<v[i].first<<" ";
        if(v[i].first!=0)cout<<v[i].second<<" ";
    }
   cout<<endl;
}


int main()
{
    Boost;

    int t=1;
    cin>>t;
    while(t--)
    {
Solve();

    }

    return 0;

}
