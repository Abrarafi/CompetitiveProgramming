/*

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
//typedef map<ll int, ll int> mii;
const int mx=1e6+123;
vector<int> is_prime(mx);
vector<int> prime;

void primegen(int n)
{
    for(int i=3;i<=n;i+=2)
    {
        is_prime[i]=1;
    }
    for(int i=3;i<=n;i+=2)
    {
        for(int j=i*i;j<=n;j+=(i+i))
        {
            is_prime[j]=0;
        }
    }

    for(int i=3;i<=n;i+=2)
    {
        if(is_prime[i]==1)prime.push_back(i);
    }
}


int main()
{
    Boost;
    
    int n;
    
    while(cin>>n)
    {
        primegen(n);
        if(n==0)break;
        for(int i=0;i<prime.size();i++)
        {
            if(is_prime[n-prime[i]]==1)
            {
                cout<<prime[i]<<" "<<n-prime[i]<<endl;
                break;
            }
           // cout<<prime[i]<<endl;

        }

    }
    return 0;

}
