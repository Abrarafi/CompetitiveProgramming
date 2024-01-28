#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
int findMajority(int arr[], int n)
{
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    return maxCount;
}
int binExp(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    int res=binExp(a,b/2);
    if(b&1)
    {
        return a*(res*res);
    }
    else{
        return res*res;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
        for(int i=1;i<n-1;i++)
        {
            int temp=a[i-1]+a[i+1];
            if(k==1)
            {if(n%2==0)
            {
                count=(n/2)-1;
            }
            else count=n/2;
            
            }
            else{
                if(a[i]>temp)
            {
                count++;
            }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}