#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        ll n,m;
        cin>>n>>m;
        ll s1=(m*(m-1))/2;
        double p1=(double)n/2;
        //cout<<p1<<endl;
        ll p2=(2*m)+((n-1)*m);
        ll s2=p1*p2;
        ll s=s1+s2;
        //cout<<s1<<" "<<s2<<endl;
        cout<<s<<endl;
    }
    return 0;
}