#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int> v(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        v[n]=INT_MAX;
        sort(v.begin(),v.end());int count=1;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(v[i]!=v[i-1])
            {
                //cout<<count<<" ";
                if(count>=c)
                {
                    ans+=c;
                }
                else ans+=count;
                count=1;
            }
            else count++;
        }
        cout<<ans<<endl;
    }
}