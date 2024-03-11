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
    int t;cin>>t;
    while(t--)
    {
       int ans;
       int n;cin>>n;
        cin>>ans;
        n--;
       while(n--)
       {
        int x;cin>>x;
        ans&=x;
       }
       cout<<ans<<endl;

    }   
}