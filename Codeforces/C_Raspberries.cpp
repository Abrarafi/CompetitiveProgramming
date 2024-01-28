//بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
//Author: Abrar_Rafi

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define mii map<ll,ll>
#define endl "\n"
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl;
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    Boost;
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k!=4)
        {
        int mx=-1;
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mx=max(mx,x%k);
            mn=min(mn,x%k);
        }
        if(mx>0)mx=k-mx;
        if(mn==0)cout<<mn<<endl;
        else
        cout<<mx<<endl;
        }
        else
        {
            int cnt=0;
            int mx=-1;
            int mn=10000;
            int p=1;
            int y;
            for(int i=0;i<n;i++)
            {
                int x;cin>>x;

                if(x%4==0)cnt+=2;
                else if(x%2==0)cnt++;
                if(p<100)p*=x;
                y=x;
                mx=max(mx,x%k);
                mn=min(mn,x%k);
                

            }
            
            if(cnt>1)cout<<"0"<<endl;
            else if(cnt==1)
            {
                if(n>1)cout<<"1"<<endl;
                else cout<<4-y%k<<endl;
            }
            else
            {   mx=k-mx;
                mx=min(mx,2);
                if(n>1)cout<<mx<<endl;
                else cout<<4-y%k<<endl;
            }
        }
    }
}