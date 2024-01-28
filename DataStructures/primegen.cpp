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
const int mx=1e6+123;
bool is_prime[mx];
vector<int> prime;

void primegen(int n)
{
    memset(is_prime,1,sizeof(is_prime));
    is_prime[1]=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=i+i;j<=n;j+=i)
        {
            is_prime[j]=0;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(is_prime[i]==1)
        prime.push_back(i);
    }

}


int main()
{
    Boost;
    int n;cin>>n;
    primegen(n);
    cout<<prime.size()<<endl;
    for(auto u:prime)cout<<u<<" ";
    cout<<endl;


    return 0;

}
