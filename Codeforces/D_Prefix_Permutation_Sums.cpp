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
#define f cout<<"f"<<endl;


void Solve()
{
     ll n;
     
        cin >> n;
        vector<ll> a(n-1);
        set<ll> s;
        s.insert(n);
        for(int i=0; i<n-1; i++){
            cin >> a[i];
            s.insert(i+1);
        }
        ll flag = 1;
        ll l = -1;
        if(s.find(a[0]) != s.end()){
            s.erase(s.find(a[0]));
        } else {
            if(l == -1)
                l = a[0];
            else
                flag = 0;
        }
        for(ll i=1; i<n-1; i++){
            ll d = a[i] - a[i-1];
            if(s.find(d) != s.end()){
                s.erase(s.find(d));
            } else {
                if(l == -1)
                    l = d;
                else {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0){
            NO;
        } else {
            ll sm = 0;
            for(auto v : s)
                sm += v;
            if(l == -1){
                ll r = n*(n+1)/2;
                if(r - a[n-2] == sm)
                    YES;
                else
                   NO;
            } else {
                if(sm == l)
                    YES;
                else
                    NO;
            }
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
