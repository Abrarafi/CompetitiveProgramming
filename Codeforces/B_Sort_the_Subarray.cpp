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


void Solve()
{
   int n;
   cin>>n;
   int a[n];
   int b[n];
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<n;i++)cin>>b[i];
   int flag=0;
   int mx_a=0,mx_b=0;
   int x=0,y=0;
   for(int i=0;i<n-1;i++)
   {
    if(b[i]<=b[i+1])
    {
        if(flag==0)
        {
            x=i+1;
            flag=1;
        }
    }
    else
    {
        if(flag)
        {
            y=i+1;
            flag=0;
            if(mx_b-mx_a<y-x){mx_a=x;mx_b=y;}
        }
    }
   }
   if(flag)
   {
        y=n;
        if(mx_b-mx_a<y-x){mx_a=x;mx_b=y;}
   }
   cout<<mx_a<<" "<<mx_b<<endl;
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
