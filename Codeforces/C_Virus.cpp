//in iterative way
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
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);
        vector<int> v;
        for(int i=0;i<m;i++)
        {
            if((i+1)<m)
            {
                v.push_back(abs(a[i+1]-a[i]-1));
            }
            else v.push_back(abs((n-a[i])+a[0]-1));
        }
        sort(v.begin(),v.end());
        int count=0;
        int j=0;
        for(int i=m-1;i>=0;i--)
        {
            //cout<<v[i]<<" ";
            if(v[i]-(j*4)==1)count+=1;
            if(v[i]>=((j*4)+1))
            count+=v[i]-((j*4)+1);
            j++;
        }
        cout<<n-count<<endl;
}
}