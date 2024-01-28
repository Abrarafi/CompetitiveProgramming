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
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   ll so=0,se=0;
   int mx=INT_MIN;
   for(int i=0;i<n;i++)
   {
    if(i%2==0)
    {
        if(a[i]>0)
        se+=a[i];
    }
    else if(a[i]>0)so+=a[i];
    mx=max(mx,a[i]);
   }
   if(mx<0)
   {
    cout<<mx<<endl;
   }
   else
   cout<<max(se,so)<<endl;
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
