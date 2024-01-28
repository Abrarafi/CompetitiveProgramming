#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a;
        cin>>b;
        vector<char> v;
        for(int i=0;i<2;i++)
        {
            v.push_back(a[i]);
            v.push_back(b[i]);
        }
        sort(v.begin(),v.end());
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(v[i]!=v[i+1]) count++;
        }
        cout<<count<<endl;
    }
}