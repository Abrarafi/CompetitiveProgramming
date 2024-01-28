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
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    
    sort(p,p+n);
    int y=(p[0]+p[n-1])/2;
    int x=findMajority(p,n);
    int sum1=0;
    int sum2=0;
    int t=0;
    for(int i=0;i<n;i++)
    {
        sum1+=abs(p[i]-x);
        if(y==p[i])t=1;
    }
    if(t)
    {
        for(int i=0;i<n;i++)
    {
        sum2+=abs(p[i]-y);
    }
    }
    else{for(int i=0;i<n;i++)
    {
        sum2+=abs(p[i]-(y+1));
    }
    }
    sum1<sum2? cout<<sum1<<endl : cout<<sum2<<endl;
    return 0;
}