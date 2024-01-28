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
        vi ar(n);
        
        set<int> arr;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            arr.insert(ar[i]);
        }    
        /*for(auto i:arr)
        {
            cout<<i<<endl;
        }*/
        int x=arr.size();
        int y=n-x;
        
        if(y%2!=0)
        {
            cout<<x-1<<endl;
        }
        else{
            cout<<x<<endl;
        }
        
    }
    return 0;
}