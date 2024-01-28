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
    
    int n;cin>>n;
    int a[n];
    vector<int> cnt(n+1);
    //memset(cnt,0,sizeof(cnt));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=n)
        cnt[a[i]]++;
    }
    int mx=0;
    for(int i=1;i<=n;i++)
    {int c=0;
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                if(j*j==i)
                {
                c+=cnt[j];
                }
                else
                {
                    c+=cnt[j];
                    c+=cnt[i/j];
                }
            }
        }
      
        mx=max(c,mx);
    }
    cout<<mx<<endl;

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
