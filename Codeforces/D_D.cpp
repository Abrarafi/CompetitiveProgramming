
author = Abrar_Rafi;

*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ignore cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define debug(x) cerr<<x<<endl;
#define here fprintf(stderr, "====I am Here====\n");
#define vi vector<int>
#define pb push_back
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define mii  map<long long int, long long int> 

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
int NOD(long long n)
{
    int ret=1;
    for(auto p:prime)
    {
    
        int cnt=0;
        if(1LL*p*p>n)break;

        while(n%p==0)
        {
            cnt++;
            n/=p;
        }
        ret*=(cnt+1);
    }
    if(n>1)ret*=2;
    return ret;
}

void Solve()
{
   ll n,k;cin>>n>>k;
   
   ll cnt=0;
   
   cnt=(NOD(k)/2)-1;

   for(ll i=k, j=1;i<=n;i*=k,j++)
   {
    cnt+=j;
   }
   cout<<cnt<<endl;

}


int main()
{
    Boost;
    primegen(1e6);
    int t=1;
    cin>>t;
    while(t--)
    {
Solve();

    }

    return 0;

}