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

bitset<N> isprime;
vector<int>prime;

void primegen(int n)
{
    n+=100;
    isprime[2]=1;prime.push_back(2);
    for(int i=3;i<=n;i+=2)isprime[i]=1;

    for(int i=3;i<sqrt(n);i+=2)
    {
        if(isprime[i]==1)
        {
           for(int j=i*i;j<=n;j+=(i+i))isprime[j]=0;
        }
    }

    for(int i=3;i<=n;i+=2)
    {
        if(isprime[i])
        {
            prime.push_back(i);
        }
    }
}
vector<long long> prime_factors(long long n)
{
    vector<long long> ret;
    for(auto p:prime)
    {
        if(1LL*p*p>n)break;

        while(n%p==0)
        {
            ret.push_back(p);
            n/=p;
        }
    }
    if(n>1)ret.push_back(n);
    return ret;
}

int main()
{
    primegen(1e3);
    Boost;
    ll n;cin>>n;
    map<int,vl> m;
    map<vi,int>c;
    ll ans=0;
    ll co=0;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x==0)co++;
        else
        {
            m[i]=prime_factors(x);
            map<int,int>cnt;
            set<int> st;
            for(auto u:m[i])
            {
                cnt[u]++;
                st.insert(u);
               // cout<<u<<" ";
            }//cout<<endl;
            vi v;
            
            for(auto u:st)
            {
                if(cnt[u]%2!=0)v.push_back(u);
            }
            ans+=c[v];
            c[v]++;
            //cout<<c[v]<<endl;
        }
        
    }
    ans+=((co*(co-1))/2);
   ans+=(co*(n-co));
    cout<<ans<<endl;
}