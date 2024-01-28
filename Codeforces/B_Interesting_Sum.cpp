#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int &i:v)cin>>i;
        sort(v.begin(),v.end());
        int ans=(v[n-1]-v[0])+(v[n-2]-v[1]);
        cout<<ans<<endl;

    }
}