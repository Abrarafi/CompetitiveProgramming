//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mll map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int a[100];
int dp[100][100];
int knapsack(int element,int target)
{
    if(target==0)return 1;
    if(element<=0)return 0;
    if(target<0)return 0;
    if(dp[element][target]!=-1)return dp[element][target];

    int cur=0;
    //take the element
    cur=max(cur,knapsack(element-1,target-a[element-1]));

    //or dont take the element and skip the element
    cur=max(cur,knapsack(element-1,target));
    dp[element][target]=cur;
    return cur;

}

int main()
{
    Boost;
    for(int i=0;i<100;i++)for(int j=0;j<100;j++)dp[i][j]=-1;
    int n;cin>>n;int k;cin>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    if(knapsack(n,k))YES;
    else NO;

}