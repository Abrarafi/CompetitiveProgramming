#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
    int a,b,c;cin>>a>>b>>c;
    int g=__gcd(a,b);
    cout<<"Case "<<i<<": ";
    if(c%g==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
}