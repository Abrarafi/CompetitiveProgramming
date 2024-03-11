//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define mii map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl;
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int m=1e9+7;


int main()
{
   Boost;
   int t;cin>>t;
   while(t--)
   {
    int n;cin>>n;
    int a[n];
    vector<int> vp;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        vp.push_back(mp[a[i]]);

    }
    vector<char>v;
    for(int i=0;i<n;i++)
    {
        v.push_back('a'+vp[i]-1);
    }
    for(auto i:v)cout<<i;
    cout<<endl;
   }

   
}