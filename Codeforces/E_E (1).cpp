#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> v(n+1);
    for(long long i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    long long min=9223372036854775807;
    long long sum=0;
    if(k==1)
    {
        for(long long i=1;i<=n;i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    else{
    for(long long i=1;i<=n;i++)
    {
        sum=v[i];
        for(long long j=1;j<n/k;j++)
        {
            //cout<<"printed";
            if((i+(j*k))<=n)
            {
                sum+=v[i+(j*k)];
            }
            else{
                sum+=v[((i+(j*k))-n)];
            }
        }
        if(min>sum) min=sum;
    }
    cout<<min<<endl;
    }
    return 0;
}