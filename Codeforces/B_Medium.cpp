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


void Solve(int i)
{
   int n;cin>>n;
   int ans=floor(log2(n))+1;
   cout<<"Case "<<i<<":"<<" "<<ans<<endl;
}


int main()
{
    Boost;

    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
Solve(i);

    }

    return 0;

}
