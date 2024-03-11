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
    int n;cin>>n;
    string s;cin>>s;
    int q;cin>>q;
    map<char,char> mp;
    while(q--)
    {
        char c,d;cin>>c>>d;
        if(mp[d]==c)
        {
            mp[d]=d;
            mp[c]=d;
        }
        else
        mp[c]=d;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]])cout<<mp[s[i]];
        else cout<<s[i];
    }cout<<endl;
}