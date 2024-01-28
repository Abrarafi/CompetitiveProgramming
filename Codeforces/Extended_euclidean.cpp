#include<bits/stdc++.h>
using namespace std;

int ext_gcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d=ext_gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(y1*(a/b));
    return d;
}

int main()
{
    int x,y,a=35,b=15;
    int ans=ext_gcd(a,b,x,y);
    cout<<ans<<endl;
    cout<<x<<" "<<y<<endl;
}