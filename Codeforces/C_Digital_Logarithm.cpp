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
    vector<string> a(n);
    vector<string> b(n);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    sort(a.begin(),a.end());
    for(auto i:a)cout<<i<<" ";
    cout<<endl;
    }


}