#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n,h,m;
        cin>>n>>h>>m;
        int tm=(h*60)+m;
        int mn=1440;
       while(n--)
       {
        int a,b;
        cin>>a>>b;
        int Tm=(a*60)+b;
        int x;
        if(Tm>=tm)x=Tm-tm;
        else
        {
            x=(1440-tm)+Tm;
        }
        mn=min(mn,x);
       }
       cout<<mn/60<<" "<<mn%60<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       solve();

    }
}