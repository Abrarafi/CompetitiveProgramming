#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int count=0;
    int m=INT_MAX;
    for(int &i:v)
    {
    cin>>i;
    if(i<0)count++;
    if(i>=0)
    {
        m=min(i,m);
    }
    }
    //cout<<m<<endl;
    //sort(v.begin(),v.end());
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=abs(abs(v[i])-1);
    }
    //cout<<count<<endl;
    if(count&1)
    {
        if(m==0)
        cout<<sum<<endl;
        else cout<<sum+2<<endl;
    }

    else cout<<sum<<endl;
}