#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,x,y;
    cin>>n>>x>>y;
    vector<long long> v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    int count=0;
    int c;
    for(int i=0;i<y;i++)
    {
        v[0]=(v[0]^x);
        if(v[0]>v[1])
        sort(v.begin(),v.end());
        else count++;
        if(count>=2)
        {
            c=i;
            break;
        }
    }
    if((y-(c+1))&1)v[0]=v[0]^x;
    for(auto i:v)cout<<i<<" ";
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	// your code goes here
	return 0;
}
