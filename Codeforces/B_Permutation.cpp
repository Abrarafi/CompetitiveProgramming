#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<'2'<<endl;
        int n;
        cin>>n;
        vector<int> v1;
        for(int i=1;i<=n;i++)
        {
            v1.push_back(i);
        }
        vector<int> v2;
        for(int i=0;i<n;i++)
        {
            if(v1[i]%2!=0)
            {
                int x=v1[i];
                v2.push_back(v1[i]);
                for(int j=0;j<n;j++)
                {
                    if(x*2<=n)
                    {
                        x=x*2;
                        v2.push_back(x);
                    }
                    else break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}