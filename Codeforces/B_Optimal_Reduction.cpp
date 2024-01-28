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
        vector<int> a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int l=1;
        int r=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]<=a[i+1])
            {
                l++;
            }
            else break;
        }
        for(int i=n;i>1;i--)
        {
            if(a[i]<=a[i-1])r++;
            else break;
        }
        l+r>=n? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}