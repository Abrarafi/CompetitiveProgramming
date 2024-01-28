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
        int s;
        cin>>s;
        vi v;
        for(int i=9;i>0;i--)
        {
            if(s==0) break;
            if(s>=i)
            {
                s-=i;
                v.push_back(i);
            }
            else 
            {
                v.push_back(s);
                break;
            }
        }
        reverse(v.begin(),v.end());
        for(int i:v)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}