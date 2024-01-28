#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        if((abs(1-x)>d && abs(m-y)>d) || (abs(1-y)>d)  && (abs(n-x)> d) )
        {
            cout<<(abs(n-1)+abs(m-1))<<endl;
        }
        else cout<<"-1"<<endl;
    }
}