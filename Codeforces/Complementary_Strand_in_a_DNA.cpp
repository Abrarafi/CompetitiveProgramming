#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
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
        int n;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='A')
            {
                str[i]='T';
            }
            else if(str[i]=='T') str[i]='A';
            else if(str[i]=='G') str[i]='C';
            else if(str[i]=='C') str[i]='G';
        }
        cout<<str<<endl;
    }
    return 0;
}