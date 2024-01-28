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
  int a[n];
  int c1=0;
  int x=-1;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    
        if(a[i]==a[0])
        {if(c1<k)
            {c1++;x=i;}
        }
        
  }
  int c2=0;
  for(int i=n-1;i>x;i--)
  {
    if(a[i]==a[n-1])
        {if(c2<k)c2++;
        }
  }
  //cout<<c1<<" "<<c2<<endl;
  if(a[0]==a[n-1])
  {
    if(c1>=k)YES;
    else NO;
  }
  else if(c1>=k && c2>=k)YES;
  else NO;
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
