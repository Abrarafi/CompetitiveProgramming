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
   string s;
   cin>>s;
   int cnt=0;ll ans=1;
   for(int i=0;i<s.size();i++)
   {
    if(s[i]=='?'){
    i==0? ans*=9 : ans*=10; 
    cnt++;}
   }
   //cout<<cnt<<endl;
   if(s[0]=='0')
   cout<<"0"<<endl;
   else cout<<ans<<endl;
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
