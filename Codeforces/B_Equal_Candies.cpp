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
        vector<int> v(n);
        for(int &i:v)
        {
            cin>>i;
        }
        int temp=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(v[i]<temp)
            {
                temp=v[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(v[i]-temp);
        }
        cout<<sum<<endl;
    }
}