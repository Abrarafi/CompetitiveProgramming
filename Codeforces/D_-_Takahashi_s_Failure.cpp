#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int b[k];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==v[n-1])count++;
    }
    int test=0;
    for(int i=0;i<k;i++)
    {
        cin>>b[i];
        if(a[b[i]-1]==v[n-1])test++;

    }
    if(test)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}