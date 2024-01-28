#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int &i:v)
        {
            cin>>i;
        }
        vector<char> a(m);
        for(int i=0;i<m;i++)
        {
            a[i]='B';
        }
        for(int i=0;i<n;i++)
        {
            if(a[v[i]-1]=='A')
            {
                a[m-v[i]]='A';
            }
            else{
                if(a[m-v[i]]=='A')
                {
                    a[v[i]-1]='A';
                }
                else{
                    if(v[i]<((m+1)-v[i]))
                    {
                        //cout<<"printed";
                        a[v[i]-1]='A';
                    }
                    else
                    {
                        a[m-v[i]]='A';
                    }
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}