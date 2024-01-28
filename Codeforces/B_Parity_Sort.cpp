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
  int n;
  cin>>n;int a[n];
  vi o;vi e;
  map<int,bool>mp;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
    if(a[i]%2==0)
    {
        e.push_back(a[i]);
        mp[i]=0;
    }
    else
    {
         mp[i]=1;
         o.push_back(a[i]);
    }
  }
  sort(o.begin(),o.end());sort(e.begin(),e.end());
  int even=0,odd=0;
  for(int i=1;i<=n-1;i++)
  {
    if(mp[i])
    {
        if(!mp[i+1])
        {
            if(o[odd]>e[even])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        odd++;
    }
   else if(!mp[i])
    {
        if(mp[i+1])
        {
            if(o[odd]<e[even])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        even++;
    }
  }
  cout<<"YES"<<endl;
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
