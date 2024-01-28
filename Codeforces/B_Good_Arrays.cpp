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
   ll n;cin>>n;
   int a[n];
   ll sum=0;
   int count=0;
   ll sc=0;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    
    if(x==1)count++;
    else sum+=(x-1);
    
   }
   if(n==1)NO;
   else{
    if(count>sum)NO;
    else YES;
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
