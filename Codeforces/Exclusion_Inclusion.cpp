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


void Solve()
{
   int n;cin>>n;
   long long a[n];

   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    
   }
    sort(a,a+n);
   reverse(a,a+n);
   for(int i=1;i<n;i++)
   {
        a[i]=a[i-1]+a[i];
   }
   for(int i=n-1;i>=0;i--)
   {
    cout<<a[i]<<" ";
   }
   cout<<endl;

   
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
