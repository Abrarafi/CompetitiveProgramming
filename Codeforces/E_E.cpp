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
#define mii  map<long long int, long long int> 


int main()
{
    int t;cin>>t;
    for(int j=1;j<=t;j++)
    {
        cout<<"Case "<<j<<": ";
        int a[6];
        ll sum=0;
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int b;cin>>b;
        ll sum2=0;
        for(int i=0;i<6;i++)
        {
            int temp;
            cin>>temp;
            sum2+=temp;
        }
        int rem=b-sum;
        ll ans=sum2-rem;
        if(ans<0)cout<<"0"<<endl;
        else
        cout<<ans<<endl;
    }
}
