#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;cin>>n>>m;
        
        int a[36];
        a[0]=0;
        a[1]=1;
        for(int i=2;i<36;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        if(m>35)
        {
            cout<<"0"<<endl;
            return;
        }
        
      int count=0;
      int x=n,y=n;
      for(int i=1;i<=m-2;i++)
      {
        
       
        count=0;
        for(;y-x<=x;x-=a[i],y+=a[i-1] )
        {
           
            count++;
        }
        x+=a[i];y-=a[i-1];
       // cout<<x<<" "<<y<<endl;
        int temp=x;
         x=y-x;
        y=temp;
      }
      cout<<count<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}