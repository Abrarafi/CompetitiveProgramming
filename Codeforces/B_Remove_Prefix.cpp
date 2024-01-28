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
    ios::sync_with_stdio(0);
    cin.tie(0);
    TestCase
    {
        int n;
        cin>>n;
        vi a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        set<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.insert(a[i]).second==true)
            {
                s.insert(a[i]);
                if(i==0) cout<<'0'<<endl;
            }
            else{
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}