#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
        cin>>n>>m;
        string a;
        string b;
        cin>>a>>b;
        if((a.substr((n-m)+1))==b.substr(1,n))
        {
            for(int i=0;i<=(n-m);i++)
            {
                if(a[i]==b[0]) 
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}