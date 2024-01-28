#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v(2*n);
        for(int &i:v)
        {
            cin>>i;
        }
        sort(v.begin(),v.end());
        int test=1;
        for(int i=0;i<n;i++)
        {
            //cout<<v[i+n]-v[i]<<endl;
            if((v[i+n]-v[i])>=x)
            {
                //cout<<v[i+n]-v[i]<<" ";
                test*=1;
            }
            else test*=0; 
        }
        test==1? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}