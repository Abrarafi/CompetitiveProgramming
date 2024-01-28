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
   vector<int> c(n+1);
    int mx=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        c[x]++;
        if(c[x]%2!=0)
        {
            cnt++;
            mx=max(cnt,mx);
        }
        else 
        {
            cnt--;
        }
    }
    cout<<mx<<endl;
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
