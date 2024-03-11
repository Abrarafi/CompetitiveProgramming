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
int main()
{
    Boost;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int sum[n];
        for(int i=0;i<n;i++)sum[i]=a[i]+b[i];
        vector<pair<int,pair<int,int>>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(sum[i],make_pair(a[i],b[i])));
        }
        sort(v.begin(),v.end());
        for(auto i:v)
        {
            cout<<i.second.first<<" ";
        }cout<<endl;
                for(auto i:v)
        {
            cout<<i.second.second<<" ";
        }cout<<endl;
    }
}