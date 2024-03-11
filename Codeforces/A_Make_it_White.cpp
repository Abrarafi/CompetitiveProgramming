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
    string s;
    cin>>s;
    int ans=0;
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B'&& f==0)f=i+1;

        if(s[i]=='B' && f!=0)ans=i+1;
    }
    cout<<ans+1-f<<endl;
   }
   
}