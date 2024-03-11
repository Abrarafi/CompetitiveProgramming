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
    
    int n,k;cin>>n>>k;
    if(n%2!=0)
    {

    for(int i=1;i<=n/2;i++)
    {
        cout<<i<<" "<<n-i+1<<" ";
    }
    cout<<n/2+1;
    }
    else{
        for(int i=1;i<=n/2;i++)
    {
        cout<<i<<" "<<n-i+1<<" ";
    }
    }
    cout<<endl;
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