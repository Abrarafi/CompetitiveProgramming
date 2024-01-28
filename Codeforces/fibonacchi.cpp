#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
void fibonacci(int n)
{
    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=2;i<=n;i++)
    {
        int c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
}
int function1(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return function1(n-1)+function1(n-2);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    //fibonacci(n);
    //fibonacci with recursive algorithm 
    for(int i=0;i<=n;i++)
    {
        cout<<function1(i)<<endl;
    }
    return 0;
}