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
   int n,k;cin>>n>>k;
   if(k-2>36){cout<<"0"<<endl; return;}
   int a=0;
   int p,q;
   vi f(36,1);
   for(int i=2;i<=36;i++)f[i]=f[i-1]+f[i+1];
   q=f[k-2];p=f[k-3];
   for(int i=0;i<=n;i++)
   {
    if(n-q*i>=0 && (n-q*i)%p==0)
    {
        if(i>=(n-q*i)/p)a++;
    }
   }
   cout<<a<<endl;
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
