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
   int cnt[n+1];
   memset(cnt,0,sizeof(cnt));
   for(int i=1;i<=n;i++)
   {
    cin>>a[i];
   }
   for(int i=n-1;i>=1;i--)
   {
    if(a[i+1]-a[i]>=2)
    {
        if(cnt[i+1]==0)cnt[i]+=2;
        else
        {
            cnt[i]=cnt[i+1]+1;
        }
    }
   }
   for(int i=1;i<=n;i++)
   {
    cout<<cnt[i]<<endl;
   }
}


int main()
{
    Solve();
    return 0;
}