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
        int d[n];
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        v.push_back(d[0]);
        for(int i=1;i<n;i++)
        {
            if(d[i]<v[i-1]&& d[i]!=0)
            {
                cout<<"-1"<<endl;
                break;
            }
            else{
                v.push_back(d[i]+v[i-1]);
            }
        }
        if(v.size()==n)
        {
            for(int i:v)cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}