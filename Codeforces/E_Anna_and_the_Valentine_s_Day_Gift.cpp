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

int zeros(ll n)
{
    int cnt =0;
    while(n)
    {
        if(n%10==0)cnt++;
        else break;
        n/=10;
    }
    return cnt;
}
int cntdigit(ll n)
{
    int cnt =0;
    while(n)
    {
        n/=10;
        cnt++;
    }
    return cnt;
}

void solve()
{
    ll n,m;cin>>n>>m;
    ll a[n];
    vector<int>v;
    int td=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        td+=cntdigit(a[i]);
        v.push_back(zeros(a[i]));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int j=0;
    for(int i:v)
    {
        if(j%2==0)td-=i;
        j++;

    }
    //cout<<td<<endl;
    if(td>m)cout<<"Sasha"<<endl;
    else cout<<"Anna"<<endl;


    

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