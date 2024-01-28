#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int iq=0;
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]<=iq)a[i]=1;
        else if(iq<q)
        {
            ++iq;
            a[i]=1;
        }
        else a[i]=0;
    }
    for(int i:a)
    {
        cout<<i;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}