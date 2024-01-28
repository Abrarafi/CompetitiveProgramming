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
   int n,m;cin>>n>>m;
   int r1=n/2;
   int r2=0;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(i%2==0)
        {
            cout<<(m*r1)+j+1<<" ";
        }
        else
        {
            cout<<(m*r2)+j+1<<" ";
        }
    }
    i%2==0? r1++:r2++;
    cout<<endl;
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
