#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+1];
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int x=-1,y=-1;
    int count=0;
    vector<int> v;
    int f=0;
    for(int i=1;i<=n;i++)
    {
        if(i==n)
        {
            if(a[i]!=0){v.push_back(i);mp[i]=1;}
            if(v.empty())continue;
            if(a[i]>1)f=1;
            if(f)
            {
                if(v[0]>1)mp[v[0]-1]=1;
                if(v[v.size()-1]<n)mp[v[v.size()-1]+1]=1;
            }
            else{
                 if(v[0]>1&& mp[v[0]-1]==0)mp[v[0]-1]=1;
                 else if(v[v.size()-1]<n) mp[v[v.size()-1]+1]=1;
            }
            if(!v.empty())count++;
            v.clear();
            f=0;
            
            
        }
       else if(a[i]!=0&&a[i+1]!=0)
        {
            v.push_back(i);
            if(i==n-1)v.push_back(n);
            mp[i]=mp[i+1]=1;
            if(a[i]>1||a[i+1]>1)f=1;
        }
        else if(a[i]!=0)
        {
            v.push_back(i);
            mp[i]=1;
            if(a[i]>1)f=1;
            if(f)
            {
                if(v[0]>1)mp[v[0]-1]=1;
                if(v[v.size()-1]<n)mp[v[v.size()-1]+1]=1;
            }
            else{
                 if(v[0]>1&& mp[v[0]-1]==0)mp[v[0]-1]=1;
                 else if(v[v.size()-1]<n) mp[v[v.size()-1]+1]=1;
            }
            v.clear();
            count++;
            f=0;
        }

    }
    
    for(int i=1;i<=n;i++)
    {
        //cout<<mp[i]<<" ";
        if(!mp[i])count++;
    }
    cout<<count<<endl;
}