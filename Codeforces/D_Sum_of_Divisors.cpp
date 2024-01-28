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
//typedef map<ll int, ll int> mii;
const long long mx=1e7+123;
long long cnt[mx];

void divisor(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            if(j%i==0)cnt[j]++;
        }
    }
}

void Solve()
{
   int n;
   cin>>n;

   for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            cnt[j]++;
        }
    }
   ll sum=0;
   for(int i=1;i<=n;i++)
   {
    sum+=(1LL*i*cnt[i]);
   }
   cout<<sum<<endl;

}


int main()
{
    Boost;

    Solve();

    return 0;

}
