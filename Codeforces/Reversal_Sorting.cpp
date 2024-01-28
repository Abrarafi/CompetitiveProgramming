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
void test(ll a[],ll n,ll x)
{
        ll mx=a[0];
            for(int i=1;i<n;i++)
            {
                mx=max(mx,a[i]);
                if(a[i]<mx)
                {
                if(mx+a[i]>x)
                {
                cout<<"NO"<<endl;
                return;
                }
                }
            }
            cout<<"YES"<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        vi ad(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            ad[i]=a[i];
        }
        sort(ad.begin(),ad.end());
        ll temp1=0;
        for(ll i=0;i<n;i++)
        {
            if(ad[i]==a[i])
            {
                temp1++;
            }
        }
        if(temp1==n)
        {
            cout<<"YES"<<endl;
        }
        else{
            test(a,n,x);


            
        }
    }
    return 0;
}