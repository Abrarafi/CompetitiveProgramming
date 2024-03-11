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
#define NO cout<<"NO"<<endl
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  int n;cin>>n;
  string a[n];
  int ind=-1;
  int flag=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(flag==0)
    {
    if(ind!=-1)
    {
    for(int j=0;j<n;j++)
    {
        if(a[i][j]=='1')
        {
            if(ind==j)
            {
                cout<<"SQUARE"<<endl;
                flag=1;
                break;
            }
            else 
            {
                cout<<"TRIANGLE"<<endl;
                flag=1;
                break;
            }

        }
    }
  }
  else{
    for(int j=0;j<n;j++)
    {
        if(a[i][j]=='1')
        {
           ind=j;
           break;
        }
    }
  }
    

}
  }
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