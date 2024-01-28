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
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=1;
    int mx=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1]<=k)
        {
            c++;
        }
        else
        {
            c=1;
        }
        mx=max(c,mx);
    }
    if(n>1)cout<<n-mx<<endl;
    else cout<<"0"<<endl;
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
