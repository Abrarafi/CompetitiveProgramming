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
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    vector<pair<int,int>>vp;
    map<int,int>my;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int ymod=a[i]%y;
        
        my[ymod]++;
        
    }
    sort(vp.begin(),vp.end());


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