#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    vi c(n);
    
    for(int &i:c)
    {
        cin>>i;
    }
    //cout<<"pirnt"<<endl;
    vi v(n);
    for(int i=0;i<n;i++)
    {
        v[i]=0;
    }
    int count=1;
    
    for(int i=0;i<n;i++)
    {
        int temp=i;
        for(int j=i+1;j<n;j++)
        {
            if(c[i]==c[j])
            {
                if((j-i)&1)
                {
                    count++;
                }
                i=j;
            }
            
        }
        
        if(count>v[c[i]-1])
            {
                v[c[i]-1]=count;
            }
            count=1;
            i=temp;

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}