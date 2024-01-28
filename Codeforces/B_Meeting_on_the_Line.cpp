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
        vector<int> x(n);
        for(int &i:x)cin>>i;
        vector<int> t(n);
        for(int &i:t)cin>>i;
        int m=INT_MAX;
        for(int i=0;i<n;i++)
        {
            m=min(m,(t[i]+abs()))
        }
    }
}