#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m+1);
    for(int i=0;i<=m;i++)
    {
        cin>>v[i];
    }
    int count=0;
    int test=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((v[m]&(1<<j))!=(v[i]&(1<<j))) test++;
        }
        if(test<=k)count++;
        test=0;
    }
    cout<<count<<endl;

}