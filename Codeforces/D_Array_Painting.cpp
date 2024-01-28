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
const int N=1e6;
bool vis[N];
vector<vector<int>> g(N);

void Solve()
{
   int n;cin>>n;
   int a[n+1];
   cin>>a[0];
   for(int i=2;i<=n;i++)
   {
    cin>>a[i];
    if(a[i-1]&&a[i])
    {
        g[i-1].push_back(i);
    }
   }


}


int main()
{
    Boost;

   
Solve();


    return 0;

}
