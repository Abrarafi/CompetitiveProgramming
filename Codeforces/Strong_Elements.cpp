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
int GcdOfArray(vector<ll>& arr, int idx)
 {
    if (idx == arr.size() - 1) {
        return arr[idx];
    }
    int a = arr[idx];
    int b = GcdOfArray(arr, idx + 1);
    return __gcd(
        a, b); 
}
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (ll i = 2; i*i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        ll prime=0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll gcd=GcdOfArray(arr,0);
        if(gcd>1)
        {
            cout<<n<<endl;
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                isPrime(arr[i])? prime++:prime+=0;

            }
            //cout<<prime<<endl;
            if(prime>1)
            {
                cout<<'0'<<endl;
            }
            else cout<<'1'<<endl;
        }
    }
    return 0;
}