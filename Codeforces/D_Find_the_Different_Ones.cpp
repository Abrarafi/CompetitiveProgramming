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
    int a[n+1];
    map<int,int> mp;
     for(int i=1;i<=n;i++)cin>>a[i];
    // for(int i=2;i<=n;i++)
    // {
    //     for(int j=i-1;j>=1;j--)
    //     {
    //         if(a[i]!=a[j])
    //         {
    //             mp[i]=j;
    //             break;
    //         }
    //     }
    // }
    int l=1,r=2;
    int x=0;
while(r<=(n+1))
{
    if(a[l]!=a[r])
    {
        x=l;
    }
    mp[r]=x;
    l=r;
    r++;
}
    //for(int i=1;i<=n;i++)cout<<mp[i]<<" ";cout<<endl;
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;cin>>l>>r;
        if(l>r)swap(l,r);
        if(mp[r]>=l)
        {
            cout<<mp[r]<<" "<<r<<endl;
        }
        else cout<<"-1"<<" -1"<<endl;
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