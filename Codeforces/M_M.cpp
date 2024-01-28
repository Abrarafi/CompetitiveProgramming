#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
   int n;cin>>n;
   char g[n][n];
    for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
       cin>>g[i][j];
    }
    
   }

   int ans=1;
   for(int i=0;i<n;i++)
   {
    int w=0;
    int b=0;
    for(int j=0;j<n;j++)
    {
        if(g[i][j]=='W')
        {
            w++;

        }
        if(w && g[i][j]=='B')
        {
            b=1;
        }
        if(w>=3&&b==0)
        {
            ans=0;
            break;
        }
        
    }if(w>n/2 || w<n/2)
        {
          ans=0;break;
        }
   }
    for(int j=0;j<n;j++)
   {
    int w=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(g[i][j]=='W')
        {
            w++;

        }
        if(w && g[i][j]=='B')
        {
            b=1;
        }
        if(w>=3&&b==0)
        {
            ans=0;
            break;
        }
        
    }if(w>n/2 || w<n/2)
        {
          ans=0;break;
        }
   }
   cout<<ans<<endl;
}