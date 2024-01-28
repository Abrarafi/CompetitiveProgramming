#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        n*=2;
        int a[n];
        vector<int>cnt(n+15);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
        }
        sort(a,a+n);
        int m=a[n-1];

        if(a[0]!=0)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            int flag=1;
            for(int i=0;i<=m;i++)
            {
                if(cnt[i]!=0){
               if(cnt[i]<2)
                {
                flag=0;
                break;
                }
                }
                else{
                    break;
                }

            }
            if(flag)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
}