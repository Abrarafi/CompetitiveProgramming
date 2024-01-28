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



void Solve()
{
    ll n;ll c;cin>>n>>c;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll l=0;
    ll r=1e10;
    const ll lim=c;
    while(l<=r)
    {   bool f=0;
        ll mid=(l+r)/2;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(a[i]+(2*mid))*(a[i]+(2*mid));
            if(sum>lim)
            {
                f=1;
                break;
            }
        }
        if(f)r=mid-1;
        //cout<<sum<<endl;
       else if(sum==c)
        {
            cout<<mid<<endl;
            break;
        }
        else if(sum>c)
        {
            r=mid-1;
        }
        else l=mid+1;
    }

}



int main()
{
    Boost;

    int t=1;
    cin>>t;
    while(t--)
    {
Solve();

    }

    return 0;

}
