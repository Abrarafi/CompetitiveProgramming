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
   int a[n];
   int mn=INT_MAX;
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=1;i<n;i++)
   {
    mn=min(a[i]-a[i-1],mn);
   }
   if(mn<0)
   {
    cout<<"0"<<endl;
   }
   else
   {
    cout<<(mn/2)+1<<endl;
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
