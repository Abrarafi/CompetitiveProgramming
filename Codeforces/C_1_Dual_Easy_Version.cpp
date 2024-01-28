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
 
 
void Solve()
{
   int n;cin>>n;
   int a[n+1];
   int mx=INT_MIN;
   int mn=INT_MAX;
   int sump=0;
    int sumn=0;
   int mi,ni;
   for(int i=1;i<=n;i++)
   {
    cin>>a[i];
    if(a[i]>mx)
    {
        mx=a[i];
        mi=i;
    }
    if(mn>a[i])
    {
        mn=a[i];
        ni=i;
    }
    if(a[i]<0)sumn+=a[i];
    else sump+=a[i];

 
   }
   vector<pair<int,int>> v;
   if(sump>(-sumn))
   {
    for(int i=2;i<=n;i++)
    {
        while(a[i]<a[i-1])
        {
            a[i]+=mx;
            v.push_back({i,mi});
            if(mx<a[i])
            {
                mx=a[i];
                mi=i;
            }
        }
    }
   }
   else
   {
    for(int i=n-1;i>=1;i--)
    {
        while(a[i]>a[i+1])
        {
            a[i]+=mn;
            v.push_back({i,ni});
            if(mn>a[i])
            {
                mn=a[i];
                ni=i;
            }
        }
        
   }
   }
   cout<<v.size()<<endl;
   for(auto i:v)
   {
    cout<<i.first<<" "<<i.second<<endl;
   }
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