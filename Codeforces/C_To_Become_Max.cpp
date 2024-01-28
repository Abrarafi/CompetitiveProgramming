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
   int n,k;
   cin>>n>>k;
   ll a[n+1];
   cin>>a[1];
   ll mx=a[1];
   ll md=INT_MAX;
   int mi;
   for(int i=2;i<=n;i++)
   {
    cin>>a[i];
   }
   for(int i=2;i<=n && k>0;i++)
   {
    if(a[i-1]<a[i])
    {
        int d=a[i]-a[i-1];
        if(k>=d*i)
        {
            a[i]+=d;
            k-=d*i;
        }
        else 
        {
            a[i]+=(k/i);
            break;
        }
    }
   }
    for(int i=1;i<=n;i++)
    {
        mx=max(mx,a[i]);
    }
    cout<<mx<<endl;
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
