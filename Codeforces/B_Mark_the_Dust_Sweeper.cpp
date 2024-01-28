#include<bits/stdc++.h>
using namespace std;
#define printed cout<<"printed"<<endl
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long &i:a)
        {
            cin>>i;
        }
        long long count=0;
        for(long long i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                count++;
            }
            else
            break;
        }
        long long ans=0;
        for(long long i=count;i<n-1;i++)
        {
            ans+=a[i];
            if(a[i]==0)
            {
                ans++;
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}