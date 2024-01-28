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
    char a[8][8];
    vector<char>ans;
    int f=-1;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!='.')
            {
                ans.push_back(a[i][j]);
            }
        }
    }
    for(auto i:ans)
    {
        cout<<i;
    }
    cout<<endl;

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
