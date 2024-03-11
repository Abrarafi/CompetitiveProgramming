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
#define deb(x) cerr << #x << " = " << x << endl;

const int N=1e9+7;
bitset<N> isprime;
vector<int>prime;

int countDivisors(int n,int k) 
{ 
    int cnt = 0; 
    if(k==1)k++;
    for(int i=k;i<=n;i++)
    {
        if(n%i==0)cnt++;
    }
    return cnt; 
} 


void solve()
{
    ll n,k;cin>>n>>k;
    deb(n);
    ll ans=0;
    if((n-k)%2!=0)ans=0;
    else
    {
        ll rem=n-k;
        if(rem>=n/2)
        {
    ans=countDivisors(rem,k);
    if(k>1)if((n%((k*2)-2))==0)ans++;
        }
    if((2*k)>n)ans++;
    }
    
    cout<<ans<<endl;

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