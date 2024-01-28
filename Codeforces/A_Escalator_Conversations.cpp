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
   int n,m,k,H;
   cin>>n>>m>>k>>H;
   int h[n+1];
   for(int i=1;i<=n;i++)cin>>h[i];
   int cnt=0;
   for(int i=1;i<=n;i++)
   {
    int d=abs(h[i]-H);
    if(d%k==0 && d!=0)
    {
        if(d/k<m)cnt++;
    }
   }
   cout<<cnt<<endl;
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
