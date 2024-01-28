#include<bits/stdc++.h>
using namespace std;
void test(int a[],int n,int l,int u,int b[])
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
    cout<<l<<" "<<u-1<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int u=1,l=1;
    vector<int> v;
    int b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1,b+(n+1));

    for(int i=1;i<=n;i++)
    {
        if(b[i]!=a[i])
        {
            v.push_back(i);
        }
    }
    
    if(v.size())
    {
    u=v[0];
    l=v[v.size()-1]+1;
    reverse(a+u,a+l);
    test(a,n,u,l,b);
    }
    else
    {
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
    }
}