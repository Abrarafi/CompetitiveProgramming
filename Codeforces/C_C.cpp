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
    Boost;
    string a,b;
    cin>>a>>b;
    //cout<<a[a.size()-1]<<" "<<b[b.size()-1]<<endl;
    int sum= (a[a.size()-1]-'0')+(b[b.size()-1]-'0');
    if(sum%2==0)cout<<"Black"<<endl;
    else cout<<"White"<<endl;
    return 0;

}
