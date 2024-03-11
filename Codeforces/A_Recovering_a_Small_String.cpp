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

void solve()
{
    int n;cin>>n;
    string s="";
    if(n>53)
    {
        s+='a'+25;
        s+='a'+25;
        n-=52;
        s+='a'+n-1;
        reverse(s.begin(),s.end());
    }
    else if(n>28)
    {
        s+='a'+25;
        n-=26;
        s+='a'+n-2;
        s+='a';
        reverse(s.begin(),s.end());
    }
    else{
        s+='a';
        s+='a';
        n-=2;
        s+='a'+n-1;
    }
    cout<<s<<endl;
}

int main()
{
   Boost;
   int t;cin>>t;
   while(t--)
   {
    solve();
   }

   
}