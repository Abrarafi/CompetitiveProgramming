#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    int test=0;
    for(int i=1;i<=n;i++)
    {
        //cout<<v[v[v[i]]]<<endl;
        if(i==v[v[v[i]]]) test=1;
    }
    test? cout<<"YES"<<endl : cout<<"NO"<<endl;
}