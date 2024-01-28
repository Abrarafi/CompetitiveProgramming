#include<bits/stdc++.h>
using namespace std;
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
    int t;
    cin>>t;
    while(t--)
    {
        long long m;
        cin>>m;
        long long temp=0;
        long long d=m/10;
        while(d)
        {
            d=d/10;
            temp++;
        }
        cout<<m-(binExp(10,temp))<<endl;
    }
    return 0;
}