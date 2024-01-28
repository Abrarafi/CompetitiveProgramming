#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a[m],b[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
    }
    string c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        for(int j=0;j<m;j++)
        {
            if(c[i]==a[j])
            {
                if(c[i].size()>b[j].size())
                {
                    c[i]=b[j];
                }
                break;
            }
        }
        cout<<c[i]<<" ";
    }
    cout<<endl;
}