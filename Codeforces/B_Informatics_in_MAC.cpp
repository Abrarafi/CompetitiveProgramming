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

void solve(int t)
{
   int n;cin>>n;
   int a[n];
   int co=0;
   int mx=0;
   int mn=INT_MAX;
   mll mp;
   fr(i,0,n-1)
   {
    cin>>a[i];
    if(a[i]==0)co++;
    mx=max(mx,a[i]);
    mn=min(mn,a[i]);
    mp[a[i]]++;
   }
    int pos;
    set<int>st1,st2;
    for(int i=0;i<=INT_MAX;i++)
    {
        if(mp[i]>=2)
        {
            st1.insert(i);
        st2.insert(i);
        }
        else{
            pos=i;
            break;
        }
        
    }
    if(mp[pos]!=0)
    {
        cout<<"-1"<<endl;
    }
    else 
    {
        int p;
        for(int i=0;i<n;i++)
        {
            if(st1.find(a[i])!=st1.end())
            {
                st1.erase(a[i]);
            }
            if(st1.empty())
            {
                p=i;
                break;

            }
        }
        for(int i=p+1;i<n;i++)
        {
            if(st2.find(a[i])!=st2.end())
            {
                st2.erase(a[i]);
            }
           
        }
        if(st2.empty())
        {
            cout<<"2"<<endl;
            cout<<1<<" "<<p+1<<endl;
            cout<<p+2<<" "<<n<<endl;
        }
        else cout<<"-1"<<endl;
    }
}

int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
}