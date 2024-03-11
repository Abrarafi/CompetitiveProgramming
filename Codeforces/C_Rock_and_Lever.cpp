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


int main()
{
	int t;cin>>t;
	while(t--)
	{
	   int n;cin>>n;
	   int a[n];
	   for(int i=0;i<n;i++)cin>>a[i];
	   ll cnt[31];
	   memset(cnt,0,sizeof(cnt));
	   for(int j=0;j<31;j++)
	   {
			int x=1<<j;
			for(int i=0;i<n;i++)
			{
				ll xo=a[i]^x;
				if(xo<x)
				{
				   
					cnt[j]++;
					
				}
			}
	   }
	   ll sum=0;
	   for(int i=0;i<31;i++)
	   {
			ll x=cnt[i];
			x--;
		sum+=(x*(x+1))/2;
	   }
	   cout<<sum<<endl;
	}
}