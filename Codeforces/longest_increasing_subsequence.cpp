#include<bits/stdc++.h>
using namespace std;


int lis(vector<int> &nums,int n)
{
   // if(n==0)return 0;
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(nums[n]>nums[i])
        ans=max(ans,lis(nums,i)+1);
    }
    return ans;
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,lis(a,i));
    }
    cout<<ans<<endl;
}