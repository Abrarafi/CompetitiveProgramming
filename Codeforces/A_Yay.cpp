//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mll map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl;
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N=1e6+123;
int main()
{
    string s;
    cin>>s;
    map<char,int> mp;
    char c1,c2;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
       

    }
    for(int i=0;i<s.size();i++)
    {
        if(mp[s[i]]==1)cout<<i+1<<endl;
    }
}