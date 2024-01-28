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
        ll h,c,t;
        cin>>h>>c>>t;
        int ans=1;
        double H=h;
        double C=c;
        double T=t;
        if(h==t)
        {
            cout<<'1'<<endl;
        }
        else if((h+c)/2==t)
        {
            cout<<'2'<<endl;
        }
        else{
            double a=(H-T);
            cout<<a<<endl;
            double b=2*T-(H+C);
            cout<<b<<endl;
        double k=abs(a/b);
        cout<<k<<endl;
        int x;
        x=(2*k+1);
       /* if(x<(2*k+1))
        {
            cout<<x+1<<endl;
        }
        else*/ cout<<x<<endl;
        //(((k*(h+c))+h)*(2*k+3))<=((((k+1)*(h+c))+h)*(2*k+1))? x=(2*k+1) : x=2*(k+1)+1;
        //cout<<x<<endl;
        }
        }
    
    return 0;
}